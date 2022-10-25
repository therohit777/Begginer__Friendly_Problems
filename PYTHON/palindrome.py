numberInput = int(input("Enter the Number: "))
copyNumber = numberInput
numberBackwards = 0
while numberInput > 0:
    rest = numberInput%10
    numberBackwards = (numberBackwards * 10)+rest
    numberInput = int(numberInput/10)
if copyNumber == numberBackwards: 
    print('The Number is Palindrome')
else: 
    print('The Number is not Palindrome')