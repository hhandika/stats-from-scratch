/*
Heru Handika
28 October 2020
Dispersion

Compiler flags:
-Wall -Werror -lm
*/
#include "disp.h"

int main(void) {
    int vec[N] = {10, 20, 23, 24, 25, 
                26, 27, 28, 29, 30};

    printf("Vector values: ");
    print_vector(vec, N);

    Range values = print_range(vec, N);
    printf("Value ranges: %d-%d\n", 
        values.min, values.max);

    printf("Variance: %.4f\n", 
        compute_variance(vec, N));
    printf("Standard deviation: %.4f\n", 
        compute_std_dev(vec, N));
    printf("Standard error: %.4f\n", 
        standard_error(vec, N));

    return EXIT_SUCCESS;
}