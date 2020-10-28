/*
Heru Handika
27 October 2020
Central tendency
*/

#include <stdio.h>
#include <stdlib.h>

#define N 10

void print_vector(int * vec, size_t vec_size);
double sum_vector(int * vec, size_t vec_size);
double mean_vector(int * vec, size_t vec_size);
int max_vector(int * vec, size_t vec_size);
int min_vector(int * vec, size_t vec_size);

int main(void) {
    int vec[N] = {10, 20, 23, 24, 25, 
                26, 27, 28, 29, 30};

    printf("Vector values: ");
    print_vector(vec, N);

    printf("Mean vector %.2f\n", mean_vector(vec, N));
    printf("Max values: %d\n", max_vector(vec, N));
    printf("Min values: %d\n", min_vector(vec, N));

    return EXIT_SUCCESS;
}

void print_vector(int * vec, size_t vec_size) {
    for (size_t i = 0; i < vec_size; i++)
        printf("%d ", vec[i]);
    printf("\n");
}

double sum_vector(int * vec, size_t vec_size) {
    double sum = 0.0;
    size_t i = 0;
    while (i < vec_size) {
        sum += (double) vec[i];
        i++;
    }
    return sum;
}

double mean_vector(int * vec, size_t vec_size) {
    return sum_vector(vec, vec_size) / vec_size;
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