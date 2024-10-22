#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

void print_vector(vector<double> x);

vector<double> add_vector(vector<double> x, vector<double> y);

vector<double> substract_vector(vector<double> x, vector<double> y);

vector<double> vector_ones(int arr_size);

vector<double> multiply_vector(vector<double> x, vector<double> y);

double sum(vector<double> vec);
vector<double> cumsum(vector<double> vec);

double dot_product(vector<double> x, vector<double> y);

double sum_of_square(vector<double> a);

double magnitude(vector<double> a);

double distance(vector<double> x, vector<double> y);

template <typename T>
vector<T> cumsum_gen(vector<T> vec)
{
    vector<T> res;

    T sum = 0;
    for (auto &i : vec)
    {
        sum += i;
        res.push_back(sum);
    }

    return res;
}

double mean(vector<double> vec);

#endif