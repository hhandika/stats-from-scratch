#ifndef CDT_H
#define CDT_H

#include <stdio.h>
#include <math.h>

#define N 10
#define Q 4

void print_vector(double * vec, size_t vec_size);
double sum_vector(double * vec, size_t vec_size);
double mean_vector(double * vec, size_t vec_size);

// Use product to calculate geometric mean
// Can cause floating point overflow if the number
// exceed the numbers that double can store.
double geom_mean_unsafe(double a[], size_t n);

// Use sum. Safer due to less potential
// for resulting large calculation
double geom_mean(double a[], size_t n);

void swap(double * arr_i, double * arr_j);
void sort_vector(double * vec, size_t vec_size);
double find_median(double * vec, size_t vec_size);
double find_quantile(double * vec, size_t vec_size, float percentile);
void print_quantile(double * vec, size_t vec_size);

#endif
