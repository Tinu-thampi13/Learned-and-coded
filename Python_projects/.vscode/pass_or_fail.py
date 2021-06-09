s1=int(input("Enter the Maths Marks : "))
s2=int(input("Enter the Physics Marks : "))
s3=int(input("Enter the Chemistry Marks : "))
sum=s1+s2+s3

if(s1<33 or s2<33 or s3<33):
    print("You are fail due to less % in any of the subjects ")

elif(s1+s2+s3)/3 <40:
    print("You are fail due to less % in total Marks ")

else:
    print("Congradulation!! You are passed")