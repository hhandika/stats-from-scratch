"""
Heru Handika
22 September 2020
Euler's number finder.
Using for loop
"""

def calculate_factorial(n: int) -> int:
    if n == 0 or n == 1:
        return 1
    else:
        return n * calculate_factorial(n-1)

def main():
    euler_number = 1.0
    for i in range(1,10):
        euler_number += 1.0 / calculate_factorial(i)

    print(f"Euler's number is {euler_number: .6f}")

if __name__ == "__main__":
    main()