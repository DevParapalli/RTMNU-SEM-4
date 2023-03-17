# 12.	Write a program to print next 5 days starting from today

import datetime

if __name__ == "__main__":
    today = datetime.date.today()
    for i in range(1, 6):
        print(f"{datetime.timedelta(days=i) + today} : {datetime.date.strftime(datetime.timedelta(days=i) + today, '%A')}")

"""
2023-03-17 : Friday
2023-03-18 : Saturday
2023-03-19 : Sunday
2023-03-20 : Monday
2023-03-21 : Tuesday
"""