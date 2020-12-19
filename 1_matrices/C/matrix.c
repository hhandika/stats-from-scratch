/*
Heru Handika
18 October 2020
Matrix operation
*/
#include <stdio.h>
#include "matrix.h"

void print_matrix(int (* arr)[N], size_t m) {
    for (size_t rows = 0; rows < m; rows++) {
        for (size_t cols = 0; cols < N; cols++) {
            printf("%d ", arr[rows][cols]);
            // printf("%d ", *((arr + rows * n) + cols));
        }
        printf("\n");
    }
}

void print_row(int (* arr)[N], size_t m, size_t row) {
    printf("\nRow %ld: ", row + 1);
    for (size_t rows = 0; rows < m; rows++)
        printf("%d ", arr[rows][row]);
    printf("\n");
}

void print_column(int (* arr)[N], size_t column) {
    printf("Column %ld: ", column + 1);
    for (size_t cols = 0; cols < N; cols++) {
            printf("%d ", arr[cols][column]);
    }
    printf("\n");
}

void create_identity_matrix(int (* arr)[N], size_t m) {
    for (size_t i = 0; i < m; i++) {
        for (size_t j = 0; j < N; j++) {
            if (i == j) arr[i][j] = 1;
            else arr[i][j] = 0; 
        }
    }
}