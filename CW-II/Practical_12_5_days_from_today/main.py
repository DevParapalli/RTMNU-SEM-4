# 12.	Write a program to print next 5 days starting from today

import datetime

if __name__ == "__main__":
    today = datetime.date.today()
    for i in range(1, 6):
        print(f"{datetime.timedelta(days=i) + today} : {datetime.date.strftime(datetime.timedelta(days=i) + today, '%A')}")
