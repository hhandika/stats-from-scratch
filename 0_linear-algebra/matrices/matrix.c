/*
Heru Handika
18 October 2020
Matrix operation
*/

#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 5

void print_matrix(int * arr, size_t m, size_t n);
void get_row(int * arr, size_t m);
// void get_column(int arr[][], size_t m);

int main(void) {
    int matrix[M][N] = {{1, 2, 3, 4, 5},
                       {10, 11, 4, 5, 6},
                       {10, 11, 4, 5, 6},
                       {10, 11, 4, 5, 6},
                       {10, 11, 4, 5, 6}};
    
    printf("No. rows: %d, cols: %d\n", M, N);
    print_matrix(&matrix[0][0], M, N);
    get_row(&matrix[0][0], M);
    
    return EXIT_SUCCESS;
}

void print_matrix(int * arr, size_t m, size_t n) {
    for (size_t i = 0; i < m; i++) {
        for (size_t j = 0; j < n; j++) {
            printf("%d ", *((arr + i * n) + j));
        }
    }
    printf("\n");
}

void get_row(int * arr, size_t m) {
    for (size_t i = 0; i < m; i++)
        printf("%d ", *(arr + i));
    printf("\n");
}

// void get_column(int arr[][], size_t m) {
//     for (size_t i = 0; i < m; i++)
//         printf("%d ", &arr[0][i]);
//     printf("\n");
// }