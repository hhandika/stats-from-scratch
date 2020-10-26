"""
Heru Handika
12 September 2020
Euler's number finder.
Using for loop
"""
#%%
def calculate_factorial(n: int) -> int:
    if n == 0 or n == 1:
        return 1
    else:
        return n * calculate_factorial(n-1)

def calculate_euler(n: int) -> int:
    return 1 + sum((1.0/calculate_factorial(i)) for i in range(1, n))

def main():
    euler_num: float = calculate_euler(10)
    print(f"Euler's number using vectorization {euler_num: .4f}")

if __name__ == "__main__":
    main()