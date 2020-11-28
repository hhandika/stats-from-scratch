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

/* 
* Pre-defined array size using macro
* this way I will only pass one single array size
* when passing two arrays. Not safe!
*/
#define MAX 5

// Shorten function call to free memory.
#define FREE_MEM(p) free_mem((void**)&p)


void print_vectors(int * vec, size_t vec_size);
int allocate_mem(int **arr, size_t size);
void free_mem(void **pointer);
int * vec_ones(size_t arr_size);
int * add_vectors(int * x, int * y, size_t arr_size);
int * substract_vectors(int x[], int y[], size_t arr_size);
int * multiply_vectors(int * x, int * y, size_t arr_size);
int sum_vectors(int * vec, size_t arr_size);
float mean_vectors(int sum, size_t arr_size);
float compute_dot_product(int * x, int * y, size_t arr_size);
float compute_sum_of_square(int * x, size_t arr_size);
float compute_magnitude(int * x, size_t arr_size);
float compute_vector_distance(int * x, int * y, size_t arr_size);

int main(void) {
    int x[MAX] = {1, 2, 3, 4, 5};
    int y[MAX] = {10, 20, 30, 40, 50};

    int * ones_vec = vec_ones(MAX);
    printf("Vector ones: "); 
    print_vectors(ones_vec, MAX);

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

    printf("Dot product: %.2f\n", 
        compute_dot_product(x,y, MAX));

    printf("Sum of square x: %.2f\n",
        compute_sum_of_square(x, MAX));
    
    printf("Sum of square y: %.2f\n",
        compute_sum_of_square(y, MAX));

    printf("Magnitude x: %.4f\n",
        compute_magnitude(x, MAX));
    
    printf("X and Y distance: %.4f\n",
        compute_vector_distance(x, y, MAX));

    FREE_MEM(add_res);
    FREE_MEM(mul_res);
    FREE_MEM(ones_vec);
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