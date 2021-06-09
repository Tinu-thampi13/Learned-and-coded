marks=int(input("Enter the marks obtained \n"))
if marks>=90:
    grades= "A+"
elif marks>=80:
    grades = "A"
elif marks>=70:
    grades = "B+"
elif marks>=60:
    grades = "B"
elif marks>=50:
    grades = "C+"
elif marks>=40:
    grades = "C"
else :
    grades = "FAIL"

print("Your grade is ",grades)