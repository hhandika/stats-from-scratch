#include "disp.h"

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

double standard_error(int a[], size_t n) {
    double sqrt_n = sqrt((double) n);
    return compute_std_dev(a, n) / sqrt_n;
}