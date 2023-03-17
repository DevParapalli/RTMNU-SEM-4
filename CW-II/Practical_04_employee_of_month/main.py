# 4.	Write a program using function to check who is employee of the month.


class Employee:
    def __init__(self, name, sales):
        self.name = name
        self.sales = sales

    def __str__(self):
        return f"{self.name} {self.sales}"

def get_employee_of_month(array_of_employees):
    employee_of_month = array_of_employees[0]
    for employee in array_of_employees:
        if employee.sales > employee_of_month.sales:
            employee_of_month = employee
    return employee_of_month

if __name__ == "__main__":
    employees = [
        Employee("John", 1000),
        Employee("Jane", 2000),
        Employee("Jack", 3000),
        Employee("Jill", 4000),
        Employee("Jude", 5000),
    ]
    print(f"Employee of the month is {get_employee_of_month(employees).name}")

""" 
Employee of the month is Jude
"""