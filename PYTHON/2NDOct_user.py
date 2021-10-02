s=input("Enter the String:")
words=s.split()
words.sort()
for i in words:
    c=0
    for j in i:
        if(j=="a" or j=="e" or j=="i" or j=="o" or j=="u" or j=="A" or j=="E" or j=="I" or j=="O" or j=="I"):
            c+=1
    print(i,",",c)
