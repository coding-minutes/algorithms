# Recursion : function calling itself is called recursion


""""
Program to print factorial of a number recursively.
def func(): <--
              |
              | (recursive call)
              |
    func() ----
"""


def recursive_factorial(n):
    if n == 1:
        return n
    else:
        return n * recursive_factorial(n-1)


# user input
num = int(input())

# check if the input is valid or not
if num < 0:
    print("Invalid input ! Please enter a positive number.")
elif num == 0:
    print("Factorial of number 0 is 1")
else:
    print("Factorial of number", num, "=", recursive_factorial(num))

"""
 cd recursion/python factorial.py
 output: Factorial of number 5 = 120
 
"""
