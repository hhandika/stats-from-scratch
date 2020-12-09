#include <stdio.h>

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
