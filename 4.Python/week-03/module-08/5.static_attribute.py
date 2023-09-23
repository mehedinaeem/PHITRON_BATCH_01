class shop:
    cart=[]

    def __init__(self,buyer):
        self.buyer=buyer
    
    def add_to_cart(self,item):
        self.cart.append(item)

shopper_1=shop('Alu Khan')
shopper_1.add_to_cart('T_shirt')
print(shopper_1.cart)

shopper_2=shop('Murgi Khan')
shopper_2.add_to_cart('half_pant')
print(shopper_2.cart)

print(shopper_1.__dict__,shopper_2.__dict__)