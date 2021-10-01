# noOfTerms = int(input("Enter the no. of terms : "))
target = int(input("Enter no. to be checked : "))
firstNumber = 0
secondNumber = 1
NextTerm = 0
flag = True
while(firstNumber <= target):
    # print(firstNumber,end=" ")
    
    if(firstNumber == target):
        print("Yes",target,"is a fibonacci number")
        flag = False
        break
    NextTerm = firstNumber + secondNumber
    firstNumber = secondNumber
    secondNumber = NextTerm

if flag == True:
    print(target,"is not a fibonacci number")