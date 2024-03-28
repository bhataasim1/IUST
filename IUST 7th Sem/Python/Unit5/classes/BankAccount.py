from time import sleep


class Bank_Account:
    def __init__(self, name, balance):
        self.name = name
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount
        return self.balance
    
    def withdraw(self, amount):
        if amount > self.balance:
            return "Insufficient balance"
        self.balance -= amount
        return self.balance
    
    def __str__(self):
        return f"{self.name} has {self.balance} in his/her account"

account = Bank_Account("Ali", 1000)
print(account)
print("Withdraw 500")
print("Withdrawing......")
sleep(2)
account.withdraw(500)
print("Withdrawl Successful, Balance Remaining ",account.balance)
print("Deposit 200")
print("Depositing......")
sleep(2)
account.deposit(200)
print("Deposit Successful, Balance is ",account.balance)