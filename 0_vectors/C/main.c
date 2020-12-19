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

int main(void) {
    double x[MAX] = {1.0, 2.0, 3.0, 4.0, 5.0};
    double y[MAX] = {10.0, 20.0, 30.0, 40.0, 50.0};

    double * ones_vec = vec_ones(MAX);
    printf("Vector ones: "); 
    print_vectors(ones_vec, MAX);

    double * add_res = add_vectors(x, y, MAX);
    printf("Vector addition: ");
    print_vectors(add_res, MAX);

    double * mul_res = multiply_vectors(x, y, MAX);
    printf("Vector multiplication: ");
    print_vectors(mul_res, MAX);

    // Print the sum x and y
    double sum_x = sum(x, MAX);
    double sum_y = sum(y, MAX);
    printf("Sum vec x: %.2f and y: %.2f\n", sum_x, sum_y);

    // Print mean x and y
    double mean_x = mean(sum_x, MAX);
    double mean_y = mean(sum_y, MAX);

    printf("Mean x: %.2f & mean y: %.2f\n", mean_x, mean_y);

    printf("Geometric mean unsafe x: %.2f\n", 
        geom_mean_unsafe(x, MAX));
    
    printf("Geometric mean x: %.2f\n", geom_mean(x, MAX));

    printf("Dot product: %.2f\n", 
        dot_product(x,y, MAX));

    printf("Sum of square x: %.2f\n",
        sum_of_square(x, MAX));
    
    printf("Sum of square y: %.2f\n",
        sum_of_square(y, MAX));

    printf("Magnitude x: %.4f\n",
        magnitude(x, MAX));
    
    printf("X and Y distance: %.4f\n",
        distance(x, y, MAX));

    FREE_MEM(add_res);
    FREE_MEM(mul_res);
    FREE_MEM(ones_vec);
    return 0;
}
