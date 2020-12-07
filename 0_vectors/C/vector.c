/*
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
#include <assert.h>
#include <math.h> 
#include "vector.h"

#define MAX 5

// Shorten function call to free memory.
#define FREE_MEM(p) free_mem((void**)&p)

void print_vectors(int vec[], size_t vec_size) {
    for (size_t i = 0; i < vec_size; i++) {
        printf("%d ", vec[i]);
    }
    printf("\n");
}

int allocate_mem(int **arr, size_t size) {
    *arr = (int *)malloc(size * sizeof(int));
    if (*arr == 0) {
        printf("\x1b[0;31Error: \x1b[0mFailed to allocate memory\n");
        exit(EXIT_FAILURE);
    }
    return 0;
}

// Avoid double free memory.
void free_mem(void **pointer) {
    if (pointer != NULL && *pointer != NULL) {
        free(*pointer);
        *pointer = NULL;
    }
}

int * vec_ones(size_t arr_size) {
    int * presult = NULL;
    allocate_mem(&presult, arr_size);
    for (size_t i = 0; i < arr_size; i++) {
        presult[i] = 1;
   }
   return presult;
}

int * add_vectors(int x[], int y[], size_t arr_size) {
    int * presult = NULL;
    allocate_mem(&presult, arr_size);
    for (size_t i = 0; i < arr_size; i++) {
                presult[i] = x[i] + y[i]; 
    }
    return presult;
}

int * substract_vectors(int x[], int y[], size_t arr_size) {
    int * presult = NULL;
    allocate_mem(&presult, arr_size);
    for (size_t i = 0; i < arr_size; i++) {
                presult[i] = x[i] - y[i]; 
    }
    return presult;
}

int * multiply_vectors(int x[], int y[], size_t arr_size) {
    int * presult = NULL;
    allocate_mem(&presult, arr_size);
    for (size_t i = 0; i < arr_size; i++) {
        presult[i] = x[i] * y[i];
    }
    return presult;
}

int sum_vectors(int vec[], size_t arr_size) {
    int sum = 0;
    size_t i = 0;

    while (i < arr_size) {
        sum += vec[i];
        i++;
    }
    return sum;
}

float mean_vectors(int sum, size_t arr_size) {
    return (float) sum / arr_size;
}

// Dot product will be use to compute sum of square
float compute_dot_product(int * x, int * y, size_t arr_size) {
    float sum = 0.0;
    for (size_t i = 0; i < arr_size; i++) {
        sum += x[i] * y[i];
    }
    return sum;
}

float compute_sum_of_square(int * x, size_t arr_size) {
    return compute_dot_product(x, x, arr_size);
}

float compute_magnitude(int * x, size_t arr_size) {
    return sqrt(compute_sum_of_square(x, arr_size));
}

float compute_vector_distance(int * x, int * y, size_t arr_size) {
    int * vec_subs = substract_vectors(x, y, MAX);
    float mag = compute_magnitude(vec_subs, MAX);
    FREE_MEM(vec_subs);
    return mag;
}