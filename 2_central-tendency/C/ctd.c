/*
Heru Handika
27 October 2020
Central tendency
*/
#include "ctd.h"


void print_vector(double * vec, size_t vec_size) {
    for (size_t i = 0; i < vec_size; i++)
        printf("%.2f ", vec[i]);
    printf("\n");
}

double sum_vector(double * vec, size_t vec_size) {
    double sum = 0.0;
    size_t i = 0;
    while (i < vec_size) {
        sum += (double) vec[i];
        i++;
    }
    return sum;
}

// Swap for sorting arrays
void swap(double * arr_i, double * arr_j) {
    double temp = *arr_i;
    *arr_i = *arr_j;
    *arr_j = temp;
}

// Using bubble sort to sort vector values
void sort_vector(double * vec, size_t vec_size) {
    for (size_t step = 0; step < vec_size - 1; step++) {
        for (size_t i = 0; i < vec_size - step - 1; i++) {
            if (vec[i] > vec[i + 1]) {
                swap(&vec[i], &vec[i + 1]);
            }
        }
    }
}

double mean_vector(double * vec, size_t vec_size) {
    return sum_vector(vec, vec_size) / vec_size;
}

static double product(double a[], size_t n) {
    double p = 1.0;
    for (size_t i = 0; i < n; i++) {
        p *= a[i];
    }
    return p;
}

// Unsafe. See function declaration for details.
double geom_mean_unsafe(double a[], size_t n) {
    return pow(product(a, n), (double) 1.0/n);
}

static double sum_log(double a[], size_t n) {
    double s_log = 0.0;
    for (size_t i = 0; i < n; i++) {
        s_log += log(a[i]);
    }
    return s_log;
}
// Safe. See function declaration for details.
double geom_mean(double a[], size_t n) {
    return exp(sum_log(a, n)/n);
}

double find_median(double * vec, size_t vec_size) {
    sort_vector(vec, vec_size);
    size_t hi_midpoint = vec_size / 2;

    if (vec_size % 2 == 0) {
        return (double)(vec[hi_midpoint - 1] + vec[hi_midpoint]) / 2.0;
    }
    return (double) vec[hi_midpoint];
}

double find_quantile(double * vec, size_t vec_size, float percentile) {
    sort_vector(vec, vec_size);
    int index = (int) (percentile * vec_size);
    return vec[index];
}

void print_quantile(double * vec, size_t vec_size) {
    float arr_quantile[Q] = {0.10, 0.25, 0.75, 0.90};
    for (size_t i = 0; i < Q; i++) {
        printf("Quantile %.f%%: %.2f\n", arr_quantile[i] * 100, 
            find_quantile(vec, vec_size, arr_quantile[i]));
    }
}