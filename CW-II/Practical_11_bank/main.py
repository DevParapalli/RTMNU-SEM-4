# 11.	Using Object oriented Programming, write a program for opening a Bank account, deposit of money and withdrawal of money. Also generate a 4 digit unique code for each transaction

import random

class Transaction:
    def __init__(self, account, amount):
        self.account = account
        self.amount = amount
        self.code = random.randint(1000, 9999)
        
    def __str__(self):
        return f"Transaction code: {self.code} | Account: {self.account.name} | Amount: {self.amount}"

class Account:
    def __init__(self, name, balance):
        self.name = name
        self.balance = balance
    def _deposit(self, amount):
        self.balance += amount
    
    def _withdraw(self, amount):
        if self.balance >= amount:
            self.balance -= amount
        else:
            raise Exception("Insufficient balance")
    
    def apply_transaction(self, transaction):
        if transaction.account == self:
            if transaction.amount > 0:
                self._deposit(transaction.amount)
            else:
                self._withdraw(transaction.amount)
        else:
            raise Exception("Transaction account does not match account")

if __name__ == "__main__":
    account = Account("Dev", 1000)
    print(f"Account: {account.name} | Balance: {account.balance}")
    transaction = Transaction(account, 100)
    account.apply_transaction(transaction)
    print(f"Transaction applied: {transaction}")
    print(f"Account: {account.name} | Balance: {account.balance}")
    