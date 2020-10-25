/*
Heru Handika
18 October 2020
Matrix operation
*/

#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 5

void print_matrix(int (* arr)[N], size_t); 
void print_row(int (* arr)[N], size_t, size_t);
void print_column(int (* arr)[N], size_t, size_t);
void create_identity_matrix(int (* arr)[N], size_t m);

int main(void) {
    int matrix[M][N] = {{1, 2, 3, 4, 5},
                       {10, 11, 4, 5, 6},
                       {10, 11, 4, 5, 6},
                       {10, 11, 4, 5, 6},
                       {10, 11, 4, 5, 6}};
    
    printf("No. rows: %d, cols: %d\n", M, N);
    print_matrix(matrix, M);
    print_row(matrix, M, 0);
    print_column(matrix, M, 1);

    int iden_mat [M][N];
    create_identity_matrix(iden_mat, M);
    printf("\nIdentity matrix 5 x 5:\n");
    print_matrix(iden_mat, M);

    return EXIT_SUCCESS;
}

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

void print_column(int (* arr)[N], size_t m, size_t column) {
    printf("Column %ld: ", column + 1);
    for (size_t cols = 0; cols < N; cols++) {
            printf("%d ", arr[cols][column]);
    }
    printf("\n");
}

void create_identity_matrix(int (* arr)[N], size_t m) {
    for (size_t i = 0; i < M; i++) {
        for (size_t j = 0; j < N; j++) {
            if (i == j) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = 0;
            }
        }
    }
}