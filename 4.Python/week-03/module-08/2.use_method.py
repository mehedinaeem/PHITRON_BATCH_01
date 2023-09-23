class phone():
    brand='sam'
    price=1000

    def call(self):
        print('ring..ring..ring')
    
    def send_sms(self,number,text):
        sms=f'sending sms:{text} to:{number}'
        return sms

my_phone=phone()
my_phone.call()

sms=my_phone.send_sms('019','hello')
print(sms)