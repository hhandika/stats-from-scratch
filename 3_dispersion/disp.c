/*
Heru Handika
28 October 2020
Dispersion

Compiler flags:
-Wall -Werror -lm
*/

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

    return EXIT_SUCCESS;
}

void print_vector(int * vec, size_t vec_size) {
    for (size_t i = 0; i < vec_size; i++)
        printf("%d ", vec[i]);
    printf("\n");
}

int max_vector(int * vec, size_t vec_size) {
    int max = 0;
    size_t i = 0;
    while (i < vec_size) {
        if (vec[i] > max) max = vec[i];
        i++;
    }
    return max;
}

int min_vector(int * vec, size_t vec_size) {
    int min = vec[0];
    size_t i = 1;
    while (i < vec_size) {
        if (vec[i] < min) min = vec[i];
        i++;
    }
    return min;
}

Range print_range(int * vec, size_t vec_size) {
    Range values;
    values.min = min_vector(vec, vec_size);
    values.max = max_vector(vec, vec_size);
    return values;
}

/***** VARIANCE ******/
/* This needs to be separated into a separate file */

double sum_vector(int * vec, size_t vec_size) {
    double sum = 0.0;
    for (size_t i = 0; i < vec_size; i++) {
        sum += (double) vec[i];
    }
    return sum;
}

double mean_vector(int * vec, size_t vec_size) {
    return sum_vector(vec, vec_size) / vec_size;
}

double compute_dot_product(double * x, double * y, size_t arr_size) {
    double sum = 0.0;
    for (size_t i = 0; i < arr_size; i++) {
        sum += x[i] * y[i];
    }
    return sum;
}

double compute_sum_of_square(double * x, size_t arr_size) {
    return compute_dot_product(x, x, arr_size);
}

double * compute_deviation_mean(int * vec, size_t vec_size) {
    double * x_bar = (double *) malloc(vec_size * sizeof(double));
    double mean = mean_vector(vec, vec_size);
    for (size_t i = 0; i < vec_size; i++) {
        x_bar[i] = vec[i] - mean;
    }
    return x_bar;
}

double compute_variance(int * vec, size_t vec_size) {
    assert(vec_size > 2);
    double * dev = compute_deviation_mean(vec, vec_size);
    double var = compute_sum_of_square(dev, vec_size) / (vec_size - 1);
    free(dev);
    return var;
}

double compute_std_dev(int * vec, size_t vec_size) {
    double var = compute_variance(vec, vec_size);
    return sqrt(var);
}