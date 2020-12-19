/*
Heru Handika
27 October 2020
Central tendency
*/

#include <stdio.h>
#include <stdlib.h>

#include "ctd.h"

int main(void) {
    double vec[N] = {10.4, 28.2, 23.3, 23.2, 20.1, 
                26.1, 27.2, 18.2, 29.1, 30.0};

    double vec_dob[] = {13.2, 13.5, 10.3, 12.0,
                        20.1, 50.3, 15.4};

    sort_vector(vec, N);
    printf("Vector values: ");
    print_vector(vec, N);

    size_t vec_size = sizeof(vec_dob)/sizeof(vec_dob[0]);
    puts("Vector double: ");
    sort_vector(vec_dob, vec_size);
    print_vector(vec_dob, vec_size);
    
    printf("Median: %.2f\n", find_median(vec_dob, vec_size));

    printf("Mean vector %.2f\n", mean_vector(vec, N));

    
    printf("Geometric mean unsafe x: %.2f\n", 
        geom_mean_unsafe(vec, N));
    
    printf("Geometric mean x: %.2f\n", geom_mean(vec, N));

    print_quantile(vec_dob, vec_size);

    return EXIT_SUCCESS;
}