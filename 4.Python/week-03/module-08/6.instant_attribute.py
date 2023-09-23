class laptop:
    def __init__(self,brand,age):
        self.brand=brand
        self.age=age

    def increase_age(self,age=1):
        self.last_age=self.age
        self.age=self.age+age

    def repair(self,life_increase):
        self.increase_age(life_increase)


my_laptop=laptop('lenevo',1)
#print(my_laptop.increase_age)
my_laptop.increase_age()
my_laptop.age=17
my_laptop.increase_age()
my_laptop.increase_age()
print(my_laptop.age)
my_laptop.repair(-10)
print(my_laptop.age)