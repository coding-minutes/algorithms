# It's a function to convert decimal number 
# to a binary number

def dec_bin(n):
    if n>=1:
        dec_bin(n//2)
    print(n%2, end='')

dec_number = int(input("Enter the number you want to find binary of: "))

dec_bin(dec_number)