/*
Heru Handika
15 February 2020
Vector operation
*/

#include <iostream>
#include <vector>

#include "vector.hpp"

using namespace std;

int main (void) {
    vector<double> x = {1.0, 2.0, 3.0, 4.0, 5.0};
    vector<double> y = {10.0, 20.0, 30.0, 40.0, 50.0};

    print_vector(x);

    vector<double> ones = vector_ones(5);
    cout << "Vector ones: ";
    print_vector(ones);

    vector<double> add_res = add_vector(x, y);
    cout << "Vector addition: ";
    print_vector(add_res);

    vector<double> sub_res = substract_vector(x, y);
    cout << "Vector substraction: ";
    print_vector(sub_res);
    
    vector<double> mul_res = multiply_vector(x, y);
    cout << "Vector multiplication: ";
    print_vector(mul_res);
}

