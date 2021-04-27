#ifndef VECTOR_H
#define VECTOR_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

#define MAX 5

// Shorten function call to free memory.
#define FREE_MEM(p) free_mem((void **)&p)

void print_vectors(double *vec, size_t vec_size);
double allocate_mem(double **arr, size_t size);
void free_mem(void **pointer);
double *vec_ones(size_t arr_size);
double *add_vectors(double *x, double *y, size_t arr_size);
double *substract_vectors(double x[], double y[], size_t arr_size);
double *multiply_vectors(double *x, double *y, size_t arr_size);
double sum(double *vec, size_t arr_size);
double *cumsum(double vec[], size_t arr_size);
double mean(double sum, size_t arr_size);
double dot_product(double *x, double *y, size_t arr_size);
double sum_of_square(double *x, size_t arr_size);
double magnitude(double *x, size_t arr_size);
double distance(double *x, double *y, size_t arr_size);

#endif
