# Recursion : function calling itself is called recursion


""""
Program to print factorial of a number recursively.
def func(): <--
              |
              | (recursive call)
              |
    func() ----
"""


def recursive_factorial(n, cache={}):
    if n == 1:
        return n
    elif n in cache:
        return cache[n]
    else:
        print(f'calculating factorial of {n}')
        cache[n] = n * recursive_factorial(n - 1)
        return cache[n]


# user input
num = int(input("Enter the number:"))

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
