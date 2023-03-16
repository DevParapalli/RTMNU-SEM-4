# 3.	Write a program that prints the integers from 1 to 100, but for multiples of 3 print ‘FIZZ’ instead of number and for multiples of five print ‘BUZZ’. 
# For numbers which are multiples of both 3 and 5 print ‘FIZZBUZZ’.

if __name__ == "__main__": 
    for i in range(101):
        output = ""
        if i % 3 == 0: output += "FIZZ"
        if i % 5 == 0: output += "BUZZ"
        if output == "": output += str(i)
        print(output)
