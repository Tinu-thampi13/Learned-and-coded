num1= int(input("Enter the No.1 : "))
num2= int(input("Enter the No.2 : "))
num3= int(input("Enter the No.3 : "))
num4= int(input("Enter the No.4 : "))

if(num1>num4):
    q1 = num1
else:
    q1 = num4

if(num3>num4):
    q2=num3
else:
    q2=num4

if(q1>q2):
    print(q1 ," is the greatest number")

else:
    print("f2 ,is the greatest number")