class phone:
    
    manufracture='china'

    def __init__(self,brand,price,colour):
        self.brand=brand
        self.price=price
        self.colour=colour

    def send_sms(self,num,text):
        sms=f'sending sms: {text} to :{num}'
        return sms

my_phone=phone('mi',10000,'green')
print(my_phone.brand,my_phone.manufracture,my_phone.price)

father_phone=phone('samsunf',5000,'white')
print(father_phone.price,father_phone.manufracture,father_phone.brand,father_phone.colour,my_phone.colour)

sms=my_phone.send_sms('000','Hi')
print(sms)