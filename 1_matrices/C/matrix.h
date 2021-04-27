#ifndef MATRIX_H
#define MATRIX_H

#include <stdio.h>

#define N 5
#define M 5

typedef struct
{
    int rows;
    int cols;
    int **data;
} Matrix;

void print_matrix(int (* arr)[N], size_t); 
void print_row(int (* arr)[N], size_t, size_t);
void print_column(int (* arr)[N], size_t);
void create_identity_matrix(int (* arr)[N], size_t m);
Matrix *create_matrix(int rows, int cols);
void print_mat_struct(Matrix * mat);
int identity(Matrix * mat);
int delete_matrix(Matrix * mat);

#endif