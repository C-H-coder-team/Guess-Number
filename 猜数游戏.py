import random
b=int(input("please input b:"))
k=False
a=random.randint(0,100)
for i in range(10):
    if a>b:
        print("Too small")
    if a<b:
        print("Too big")
    if a==b:
        print("you are right")
        k=True
if !k:
    print("you false,the number is:" + str(a))
