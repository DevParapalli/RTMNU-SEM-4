from json import dumps
from copy import deepcopy
from re import findall, sub

O_REL = ['A', 'B', 'C', 'D']
FD = [
    ['AB', 'B'],
    ['B', 'C'],
    ['C', 'D'],
]
NEW_REL = [
    ['A', 'B'],
    ['B', 'C'],
    ['C', 'D'],
]

def fuzzy_count(_itr: list[str], elem: str):
    return sum([1 for i in _itr if elem in i])

def initialize(old_rel, new_rel):
    table: list[list[str]] = [["" for _ in old_rel] for _ in new_rel]
    for row_index, row in enumerate(table):
        for col_index, col in enumerate(row):
            if old_rel[col_index] in new_rel[row_index]:
                table[row_index][col_index] = f"a({col_index})"
            else:
                table[row_index][col_index] = f"b({row_index},{col_index})"
    return table

def attrs_intersection(attrs: list[str]) -> str:
    for s in attrs:
    # remove content inside parenthesis
        s = sub(r'\([^)]*\)', '', s)
        s = s.replace(" ", "")
    return 'a' if all([True if 'a' in attr else False for attr in attrs]) else 'b'

def woolman_algorithm_test(old_rel: list[str], new_rel: list[list[str]], fd: list[list[str]]) -> bool:
    # Step 1: Initialize
    table = initialize(old_rel, new_rel)

    while True:
        compare_table = deepcopy(table)
        for dep in fd:
            check_lhs: list[str] = []
            compound_attr: list[list[str]] = []
            for attr in dep[0]:
                compound_attr.append([row[old_rel.index(attr)] for row in table])
            for i, c_attr in enumerate(map(list, zip(*compound_attr))):
                check_lhs.append(attrs_intersection(c_attr))
                # at this point we have a comparison list, that we can use to check for the step 2 conditions
                pass # breakpoint
            
            # Check if RHS is multipart
            UPDATION_LIST: list[list[str]] = []
            for attr in dep[1]:
                UPDATION_LIST.append([row[old_rel.index(attr)] for row in table])

        print(dumps(table, indent=4))
        if compare_table == table:
            for row in table:
                if fuzzy_count(row, "a") == len(row):
                    return True
            return False
    
    
if __name__ == '__main__':
    woolman_algorithm_test(O_REL, NEW_REL, FD)
