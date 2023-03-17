# 3.	Write a program that prints the integers from 1 to 100, but for multiples of 3 print ‘FIZZ’ instead of number and for multiples of five print ‘BUZZ’.
# For numbers which are multiples of both 3 and 5 print ‘FIZZBUZZ’.

if __name__ == "__main__":
    for i in range(1, 101):
        output = ""
        if i % 3 == 0:
            output += "FIZZ"
        if i % 5 == 0:
            output += "BUZZ"
        if output == "":
            output += str(i)
        print(output)

"""
1
2
FIZZ
4
BUZZ
FIZZ
7
8
FIZZ
BUZZ
11
FIZZ
13
14
FIZZBUZZ
16
17
FIZZ
19
BUZZ
FIZZ
22
23
FIZZ
BUZZ
26
FIZZ
28
29
FIZZBUZZ
31
32
FIZZ
34
BUZZ
FIZZ
37
38
FIZZ
BUZZ
41
FIZZ
43
44
FIZZBUZZ
46
47
FIZZ
49
BUZZ
FIZZ
52
53
FIZZ
BUZZ
56
FIZZ
58
59
FIZZBUZZ
61
62
FIZZ
64
BUZZ
FIZZ
67
68
FIZZ
BUZZ
71
FIZZ
73
74
FIZZBUZZ
76
77
FIZZ
79
BUZZ
FIZZ
82
83
FIZZ
BUZZ
86
FIZZ
88
89
FIZZBUZZ
91
92
FIZZ
94
BUZZ
FIZZ
97
98
FIZZ
BUZZ
"""
