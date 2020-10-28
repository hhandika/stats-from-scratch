/*
Heru Handika
28 October 2020
Dispersion
*/

#include <stdio.h>
#include <stdlib.h>

#define N 10

typedef struct {
    int min;
    int max;
} Range;

void print_vector(int * vec, size_t vec_size);
int max_vector(int * vec, size_t vec_size);
int min_vector(int * vec, size_t vec_size);
Range print_range(int * vec, size_t vec_size);

int main(void) {
    int vec[N] = {10, 20, 23, 24, 25, 
                26, 27, 28, 29, 30};

    printf("Vector values: ");
    print_vector(vec, N);

    Range values = print_range(vec, N);
    printf("Value ranges: %d-%d\n", 
        values.min, values.max);

    return EXIT_SUCCESS;
}

void print_vector(int * vec, size_t vec_size) {
    for (size_t i = 0; i < vec_size; i++)
        printf("%d ", vec[i]);
    printf("\n");
}

int max_vector(int * vec, size_t vec_size) {
    int max = 0;
    size_t i = 0;
    while (i < vec_size) {
        if (vec[i] > max) max = vec[i];
        i++;
    }
    return max;
}

int min_vector(int * vec, size_t vec_size) {
    int min = vec[0];
    size_t i = 1;
    while (i < vec_size) {
        if (vec[i] < min) min = vec[i];
        i++;
    }
    return min;
}

Range print_range(int * vec, size_t vec_size) {
    Range values;
    values.min = min_vector(vec, vec_size);
    values.max = max_vector(vec, vec_size);
    return values;
}