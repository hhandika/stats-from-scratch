/*
Heru Handika
6 September 2020
Vector operation includes:
Addition
Multiplication
Summation
Mean
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MAX 5
#define FREE_MEM(p) free_mem((void**)&p)

void print_vectors(int * vec, size_t vec_size);
int allocate_mem(int **arr, size_t size);
void free_mem(void **pointer);
int * add_vectors(int * x, int * y, size_t arr_size);
int * multiply_vectors(int * x, int * y, size_t arr_size);
int sum_vectors(int * vec, size_t arr_size);
float mean_vectors(int sum, size_t arr_size);
int sum_for_vec(int vec[], size_t arr_size);

int main(void) {
    int x[MAX] = {1, 2, 3, 4, 5};
    int y[MAX] = {10, 20, 30, 40, 50};

    int * add_res = add_vectors(x, y, MAX);
    printf("Vector addition: ");
    print_vectors(add_res, MAX);

    int * mul_res = multiply_vectors(x, y, MAX);
    printf("Vector multiplication: ");
    print_vectors(mul_res, MAX);

    // Print the sum x and y
    int sum_x = sum_vectors(x, MAX);
    int sum_y = sum_vectors(y, MAX);
    printf("Sum vec x: %d and y: %d\n", sum_x, sum_y);

    // Print mean x and y
    float mean_x = mean_vectors(sum_x, MAX);
    float mean_y = mean_vectors(sum_y, MAX);

    printf("Mean x: %.2f & mean y: %.2f\n", mean_x, mean_y);

    FREE_MEM(add_res);
    FREE_MEM(mul_res);
    return 0;
}

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

void free_mem(void **pointer) {
    // Avoid double free memory.
    if (pointer != NULL && *pointer != NULL) {
        free(*pointer);
        *pointer = NULL;
    }
}

int * add_vectors(int x[], int y[], size_t arr_size) {
    int * presult = NULL;
    allocate_mem(&presult, arr_size);
    for (size_t i = 0; i < arr_size; i++) {
                presult[i] = x[i] + y[i]; 
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
    float mean = 0.0;

    mean = (float) sum / arr_size;

    return mean;
}