/*
Heru Handika
18 October 2020
Matrix operation
*/
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "matrix.h"

void print_matrix(int (*arr)[N], size_t m)
{
    for (size_t rows = 0; rows < m; rows++)
    {
        for (size_t cols = 0; cols < N; cols++)
        {
            printf("%d ", arr[rows][cols]);
            // printf("%d ", *((arr + rows * n) + cols));
        }
        printf("\n");
    }
}

void print_row(int (*arr)[N], size_t m, size_t row)
{
    printf("\nRow %ld: ", row + 1);
    for (size_t rows = 0; rows < m; rows++)
        printf("%d ", arr[rows][row]);
    printf("\n");
}

void print_column(int (*arr)[N], size_t column)
{
    printf("Column %ld: ", column + 1);
    for (size_t cols = 0; cols < N; cols++)
    {
        printf("%d ", arr[cols][column]);
    }
    printf("\n");
}

void create_identity_matrix(int (*arr)[N], size_t m)
{
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            if (i == j)
                arr[i][j] = 1;
            else
                arr[i][j] = 0;
        }
    }
}

// #define ELEM(mtx, row, col)
//   mtx->data[(col-1) * mtx->rows + (row-1)]

Matrix *create_matrix(int rows, int cols)
{
    Matrix *mat = (Matrix *)malloc(sizeof(Matrix));

    mat->rows = rows;
    mat->cols = cols;

    int **data = (int **)malloc(sizeof(int *) * rows);

    for (int i = 0; i < rows; i++)
    {
        data[i] = calloc(cols, sizeof(int));
    }

    mat->data = data;
    return mat;
}

void print_mat_struct(Matrix *mat)
{
    for (int row = 0; row < mat->rows; row++)
    {
        for (int col = 0; col < mat->cols; col++)
        {
            printf("%d ", mat->data[row][col]);
        }
        printf("\n");
    }
}

int identity(Matrix *mat)
{
    for (int col = 0; col < mat->cols; col++)
    {
        for (int row = 0; row < mat->rows; row++)
        {
            if (row == col)
            {
                mat->data[row][col] = 1;
            }
            else
            {
                mat->data[row][col] = 0;
            }
        }
    }
    return 0;
}

int delete_matrix(Matrix *mat)
{
    assert(mat->data);
    free(mat->data);
    free(mat);

    return 0;
}
