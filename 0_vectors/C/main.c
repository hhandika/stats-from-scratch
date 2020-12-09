/*/*
Heru Handika
6 September 2020
Vector operation includes:
Addition
Substraction
Multiplication
Summation
Mean
Dot product
Sum of square
Magnitude
Distance

Compiler flags: -Wall -Werror -lm
*/

#include <stdio.h>
#include <stdlib.h>
#include "vector.h"
/* 
* Pre-defined array size using macro
* this way I will only pass one single array size
* when passing two arrays. Not safe!
*/
#define MAX 5

// Shorten function call to free memory.
#define FREE_MEM(p) free_mem((void**)&p)

int main(void) {
    int x[MAX] = {1, 2, 3, 4, 5};
    int y[MAX] = {10, 20, 30, 40, 50};

    int * ones_vec = vec_ones(MAX);
    printf("Vector ones: "); 
    print_vectors(ones_vec, MAX);

    int * add_res = add_vectors(x, y, MAX);
    printf("Vector addition: ");
    print_vectors(add_res, MAX);

    int * mul_res = multiply_vectors(x, y, MAX);
    printf("Vector multiplication: ");
    print_vectors(mul_res, MAX);

    // Print the sum x and y
    int sum_x = sum_vectors(x, MAX);
    int sum_y = sum_vectors(y, MAX);
    printf("Sum vec x: %d and y: %d\n", sum_x, sum_y);

    // Print mean x and y
    float mean_x = mean_vectors(sum_x, MAX);
    float mean_y = mean_vectors(sum_y, MAX);

    printf("Mean x: %.2f & mean y: %.2f\n", mean_x, mean_y);

    printf("Dot product: %.2f\n", 
        compute_dot_product(x,y, MAX));

    printf("Sum of square x: %.2f\n",
        compute_sum_of_square(x, MAX));
    
    printf("Sum of square y: %.2f\n",
        compute_sum_of_square(y, MAX));

    printf("Magnitude x: %.4f\n",
        compute_magnitude(x, MAX));
    
    printf("X and Y distance: %.4f\n",
        compute_vector_distance(x, y, MAX));

    FREE_MEM(add_res);
    FREE_MEM(mul_res);
    FREE_MEM(ones_vec);
    return 0;
}
