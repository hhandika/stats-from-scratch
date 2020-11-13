/*
Heru Handika
27 October 2020
Central tendency
*/

#include <stdio.h>
#include <stdlib.h>

#define N 10
#define Q 4

void print_vector(double * vec, size_t vec_size);
double sum_vector(double * vec, size_t vec_size);
double mean_vector(double * vec, size_t vec_size);
void swap(double * arr_i, double * arr_j);
void sort_vector(double * vec, size_t vec_size);
double find_median(double * vec, size_t vec_size);
double find_quantile(double * vec, size_t vec_size, float percentile);
void print_quantile(double * vec, size_t vec_size);

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

    print_quantile(vec_dob, vec_size);

    return EXIT_SUCCESS;
}

void print_quantile(double * vec, size_t vec_size) {
    float arr_quantile[Q] = {0.10, 0.25, 0.75, 0.90};
    for (size_t i = 0; i < Q; i++) {
        printf("Quantile %.f%%: %.2f\n", arr_quantile[i] * 100, 
            find_quantile(vec, vec_size, arr_quantile[i]));
    }
}

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

double find_median(double * vec, size_t vec_size) {
    sort_vector(vec, vec_size);
    // Get mid point
    size_t hi_midpoint = vec_size / 2;
    // If even
    if (vec_size % 2 == 0) {
        return (double)(vec[hi_midpoint - 1] + vec[hi_midpoint]) / 2.0;
    }
    // if odd
    return (double) vec[hi_midpoint];
}

double find_quantile(double * vec, size_t vec_size, float percentile) {
    sort_vector(vec, vec_size);
    int index = percentile * vec_size;
    return vec[index];
}
