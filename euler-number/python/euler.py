"""
Heru Handika
16 September 2020
Euler's number implementation on python
Using more verbose while loop.
"""

def calculate_factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * calculate_factorial(n-1)

def calculate_euler_number(n):
    counts = 1
    total = 0.0
    while counts < n:
        total += 1.0 / calculate_factorial(counts)
        counts += 1
        
    return total + 1

def main():
    n = 10
    euler_number = calculate_euler_number(n)

    print(f"Euler's number is {euler_number}")

if __name__ == "__main__":
    main()