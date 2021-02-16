#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

void print_vector(vector<double> x);

vector<double> add_vector(vector<double> x, vector<double> y);

vector<double> substract_vector(vector<double> x, vector<double> y);

vector<double> vector_ones(int arr_size);

vector<double> multiply_vector(vector<double> x, vector<double> y);

double sum(vector<double> vec);
vector<double> cumsum(vector<double> vec);
double mean(vector<double> vec);