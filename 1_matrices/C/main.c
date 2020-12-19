/*
Heru Handika
18 October 2020
Matrix operation
*/

#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

#define N 5
#define M 5

int main(void) {
    int matrix[M][N] = {{1, 2, 3, 4, 5},
                       {10, 11, 4, 5, 6},
                       {10, 11, 4, 5, 6},
                       {10, 11, 4, 5, 6},
                       {10, 11, 4, 5, 6}};
    
    printf("No. rows: %d, cols: %d\n", M, N);
    print_matrix(matrix, M);
    print_row(matrix, M, 0);
    print_column(matrix, 1);

    int iden_mat [M][N];
    create_identity_matrix(iden_mat, M);
    printf("\nIdentity matrix 5 x 5:\n");
    print_matrix(iden_mat, M);

    return EXIT_SUCCESS;
}