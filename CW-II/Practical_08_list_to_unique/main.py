# 8.	Write a python function that takes a list and return a new list with unique elements of the first list. For example,Sample List =[1,1,1,2,2,3,3,4]Unique List = [1,2,3,4]

LIST = [1, 1, 1, 2, 2, 3, 3, 4]

def get_unique_list(_l):
    return list(set(_l))

if __name__ == "__main__":
    print(get_unique_list(LIST))

"[1, 2, 3, 4]"
