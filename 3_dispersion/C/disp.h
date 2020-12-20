#ifndef DISP_H
#define DISP_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

#define N 10

typedef struct {
    int min;
    int max;
} Range;

void print_vector(int * vec, size_t vec_size); 
int max_vector(int * vec, size_t vec_size);
int min_vector(int * vec, size_t vec_size);
Range print_range(int * vec, size_t vec_size);
double sum_vector(int * vec, size_t vec_size);
double mean_vector(int * vec, size_t vec_size);
double compute_dot_product(double * x, double * y, size_t arr_size);
double compute_sum_of_square(double * x, size_t arr_size);
double * compute_deviation_mean(int * vec, size_t vec_size);
double compute_variance(int * vec, size_t vec_size);
double compute_std_dev(int * vec, size_t vec_size);
double standard_error(int a[], size_t n);

#endif
