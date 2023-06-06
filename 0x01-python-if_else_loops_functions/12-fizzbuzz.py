#!/usr/bin/python3
# 12-fizzbuzz.py


def fizzbuzz():
    """Prints numbers from 1 up to 100 separated by space bar.

    multiples of three, print Fizz instead of number.
    multiples of five, print Buzz instead of number.
    multiples of three & five, print FizzBuzz instead of number.
    """
    for number in range(1, 101):
        if number % 3 == 0 and number % 5 == 0:
            print("FizzBuzz ", end="")
        elif number % 3 == 0:
            print("Fizz ", end="")
        elif number % 5 == 0:
            print("Buzz ", end="")
        else:
            print("{} ".format(number), end="")
