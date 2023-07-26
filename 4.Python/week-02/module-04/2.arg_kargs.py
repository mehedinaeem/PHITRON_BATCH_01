def full_name(f_name,l_name):
    name=f'{f_name} {l_name}'
    return name
name=full_name(l_name="khan",f_name="Pathan")
print(name)


def add(num1,num2,*numbers):
    print(num1,num2)
    print(numbers)

add(10,20,30,40,50)


def all_types(first, *args, **kargs):
    print(first)
    for word in args:
        print(word)
    print(kargs)
    for key, value in kargs.items():
        print(key,value)

all_types('abd','ddd','sdn','pp',name='Abul',Father='bulbul')