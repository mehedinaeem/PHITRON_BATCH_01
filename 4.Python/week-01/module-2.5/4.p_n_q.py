n=(input("Enter Number: "))
while n!="quit":
    n=int(n)
    if(n>0):
        print("Positive")
    elif(n<0):
        print("Negative")
    else:
        print("Zero")
    
    n=int(input("Enter Number: "))



# while True:
#     n = input("Enter Number (or 'quit' to exit): ")
    
#     if n == "quit":
#         print("Bye")
#         break

#     n = int(n)
#     if n > 0:
#         print("Positive")
#     elif n < 0:
#         print("Negative")
#     else:
#         print("Zero")
