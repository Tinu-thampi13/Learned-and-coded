num=int(input("Enter the Number: \n"))
factorial=1
for i in range(1, num+1):
    factorial=factorial*i
print(f"The Factorial of {num} is {factorial}")