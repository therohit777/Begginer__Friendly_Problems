num=int(input("Enter a number: "))

for i in range(2,num//2+1):
    if(num%i==0):
        print("The given the number is not Prime")
        break
else:
    print("The given number is Prime")