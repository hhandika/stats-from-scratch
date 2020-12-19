#ifndef MATRIX_H
#define MATRIX_H

#include <stdio.h>

#define N 5
#define M 5

void print_matrix(int (* arr)[N], size_t); 
void print_row(int (* arr)[N], size_t, size_t);
void print_column(int (* arr)[N], size_t);
void create_identity_matrix(int (* arr)[N], size_t m);

#endif