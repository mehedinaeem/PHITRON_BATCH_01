class person:
    def __init__(self, name, age, money):
        self.name = name
        self.age = age
        self.money = money
        
    def __add__(self,other):
        return self.age+other.age
        return self.money+other.money
    
    def __ge__(self,other):
        return self.age>=other.age
    
    def __call__(self):
        print(f'this is {self.name} with {self.age} and have {self.money}')


alim = person('Alim', 15, 400)
jalim = person('Jalim', 20, 500)

print(alim.name,jalim.name,alim.money+jalim.money)

#for add two object we have to use a function
print(alim+jalim)

#condtion
print(alim>=jalim)

alim()
jalim()