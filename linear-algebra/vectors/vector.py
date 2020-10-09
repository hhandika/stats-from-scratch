"""
Heru handika
9 October 2020
Vector operation using python
standard library.
"""
from typing import List

#%%
def main():
    x: List[int] = [1, 2, 3, 4, 5]
    y: List[int] = [10, 20, 30, 40, 50]

    add_res: List[int] = add_vectors(x, y)
    print(f"Vector addtion: {add_res}")

    sub_res: List[int] = substract_vector(x,y)
    print(f"Vector substraction: {sub_res}")

    mul_res: List[int] = multiply_vector(x, y)
    print(f"Vector multiplication: {mul_res}")

    scal_res: List[int] = multiply_by_scalar(x, 2)
    print(f"Scalar multiplication: {scal_res}")

    sum_x: int = sum_vector(x)
    print(f"Sum vector x: {sum_x}")

    mean_x: float = mean_vectors(x)
    print(f"Mean vector x: {mean_x}")

    dot: int = calculate_dot_product(x, y)
    print(f"Dot product: {dot}")

    sum_of_sq_x: float = calculate_sum_of_square(x)
    print(f"Sum of square x: {sum_of_sq_x}")

def add_vectors(x: List[int], y: List[int]) -> List[int]:
    return [i + j for i, j in zip(x, y) ]

def substract_vector(x: List[int], y: List[int]) -> List[int]:
    return [i - j for i, j in zip(x, y) ]

def multiply_vector(x: List[int], y: List[int]) -> List[int]:
    return [i * j for i, j in zip(x, y) ]

def multiply_by_scalar(vec: List[int], scale: int) -> List[int]:
    return [scale * i for i in vec]

def sum_vector(vec: List[int]) -> int:
    return sum(i for i in vec)

def mean_vectors(vec: List[int]) -> float:
    return float(sum_vector(vec))/len(vec)

def calculate_dot_product(x: List[int], y: List[int]) -> int:
    return sum(multiply_vector(x, y))

def calculate_sum_of_square(vec: List[int]) -> float:
    return float(calculate_dot_product(vec, vec))

if __name__ == "__main__":
    main()
