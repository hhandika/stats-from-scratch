/*
Heru Handika
6 September 2020
Vector operation
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

void add_vectors(int * x, int * y, size_t arr_size) ;
int * multiply_vectors(int * x, int * y, size_t arr_size);
void print_vectors(int * vec, size_t vec_size);


int main(void) {
    int x[MAX] = {1, 2, 3, 4, 5};
    int y[MAX] = {10, 20, 30, 40, 50};

    add_vectors(x, y, MAX);

    int * result = multiply_vectors(x, y, MAX);

    printf("\n");
    print_vectors(result, MAX);

    printf("\nRes %d\n", *result);
    free(result);

    return 0;
}

void add_vectors(int x[], int y[], size_t arr_size) {
    int result[MAX];
    for (size_t i = 0; i < arr_size; i++) {
                result[i] = x[i] + y[i]; 
    }
    print_vectors(result, arr_size);
}

int * multiply_vectors(int * x, int * y, size_t arr_size) {
    int * result = (int *) malloc(sizeof(int));
    
    for (size_t i = 0; i < arr_size; i++) {
        result[i] = x[i] * y[i];
    }
    return result;
}

void print_vectors(int vec[], size_t vec_size) {
    for (size_t i = 0; i < vec_size; i++) {
        printf("%d ", vec[i]);
    }
}

