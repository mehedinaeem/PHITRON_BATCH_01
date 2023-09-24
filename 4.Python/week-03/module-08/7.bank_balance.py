class bank:
    def __init__(self, balance):
        self.balance = balance
        self.min_withdraw = 100
        self.max_withdraw = 9000

    def get_balance(self):
        return self.balance

    def withdraw(self, amount):
        if (amount > self.balance):
            return 'No money!!! You are Fokir'
        elif (amount > self.max_withdraw):
            return f'Limit exit. Maximum get {self.max_withdraw}'
        elif (amount < self.min_withdraw):
            return f'Not possible!!! Minimum withdraw {self.min_withdraw}'
        else:
            self.balance = self.balance - amount
            return f'Here is your money {amount}'

    def deposit(self,amount):
        self.balance = self.balance + amount


my_account = bank(8000)
reply = my_account.withdraw(500)
print(reply)
print(my_account.balance)
my_account.deposit(1000)
print(my_account.balance)
