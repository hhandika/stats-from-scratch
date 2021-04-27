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
*/
#include "vector.h"

void print_vectors(double vec[], size_t vec_size)
{
    for (size_t i = 0; i < vec_size; i++)
    {
        printf("%.2f ", vec[i]);
    }
    printf("\n");
}

double allocate_mem(double **arr, size_t size)
{
    *arr = (double *)malloc(size * sizeof(double));
    if (*arr == 0)
    {
        printf("\x1b[0;31Error: \x1b[0mFailed to allocate memory\n");
        exit(EXIT_FAILURE);
    }
    return 0;
}

// Avoid double free memory.
void free_mem(void **pointer)
{
    if (pointer != NULL && *pointer != NULL)
    {
        free(*pointer);
        *pointer = NULL;
    }
}

double *vec_ones(size_t arr_size)
{
    double *presult = NULL;
    allocate_mem(&presult, arr_size);
    for (size_t i = 0; i < arr_size; i++)
    {
        presult[i] = 1;
    }
    return presult;
}

double *add_vectors(double x[], double y[], size_t arr_size)
{
    double *presult = NULL;
    allocate_mem(&presult, arr_size);
    for (size_t i = 0; i < arr_size; i++)
    {
        presult[i] = x[i] + y[i];
    }
    return presult;
}

double *substract_vectors(double x[], double y[], size_t arr_size)
{
    double *presult = NULL;
    allocate_mem(&presult, arr_size);
    for (size_t i = 0; i < arr_size; i++)
    {
        presult[i] = x[i] - y[i];
    }
    return presult;
}

double *multiply_vectors(double x[], double y[], size_t arr_size)
{
    double *presult = NULL;
    allocate_mem(&presult, arr_size);
    for (size_t i = 0; i < arr_size; i++)
    {
        presult[i] = x[i] * y[i];
    }
    return presult;
}

double sum(double vec[], size_t arr_size)
{
    double sum = 0;
    size_t i = 0;

    while (i < arr_size)
    {
        sum += vec[i];
        i++;
    }
    return sum;
}

double *cumsum(double vec[], size_t arr_size)
{
    double *res = NULL;
    allocate_mem(&res, arr_size);

    double sum = 0;
    for (size_t i = 0; i < arr_size; i++)
    {
        sum += vec[i];
        res[i] = sum;
    }

    return res;
}

double mean(double sum, size_t arr_size)
{
    return (double)sum / arr_size;
}

// Dot product will be use to compute sum of square
double dot_product(double x[], double y[], size_t arr_size)
{
    double sum = 0.0;
    for (size_t i = 0; i < arr_size; i++)
    {
        sum += x[i] * y[i];
    }
    return sum;
}

double sum_of_square(double a[], size_t arr_size)
{
    return dot_product(a, a, arr_size);
}

double magnitude(double a[], size_t arr_size)
{
    return sqrt(sum_of_square(a, arr_size));
}

double distance(double x[], double y[], size_t arr_size)
{
    double *vec_subs = substract_vectors(x, y, arr_size);
    double mag = magnitude(vec_subs, arr_size);
    FREE_MEM(vec_subs);
    return mag;
}
