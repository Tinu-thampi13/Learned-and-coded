text=input("Enter the text\n")

if("click this"in text):
    spam=True
elif("subscribe this"in text):
    spam=True
elif("make money online"in text):
    spam=True 
else:
    spam=False

if(spam):
    print("This is a spam message")
else:
    print("This is not a spam message")