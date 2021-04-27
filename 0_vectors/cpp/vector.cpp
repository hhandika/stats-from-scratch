/*
Heru Handika
15 February 2021
Vector operation
*/

#include "vector.hpp"

using namespace std;

void print_vector(vector<double> x)
{
    for (auto &i : x)
    {
        cout << i << " ";
    }

    cout << endl;
}

vector<double> vector_ones(int arr_size)
{
    vector<double> res;
    res.reserve(arr_size);

    for (int i = 0; i < arr_size; i++)
    {
        res.push_back(1);
    }

    return res;
}

vector<double> add_vector(vector<double> x, vector<double> y)
{
    assert(x.size() == y.size());
    vector<double> res;
    res.reserve(x.size());

    for (int i = 0; i < x.size(); i++)
    {
        res.push_back(x[i] + y[i]);
    }

    return res;
}

vector<double> substract_vector(vector<double> x, vector<double> y)
{
    assert(x.size() == y.size());
    vector<double> res;
    res.reserve(x.size());

    for (int i = 0; i < x.size(); i++)
    {
        res.push_back(x[i] - y[i]);
    }

    return res;
}

vector<double> multiply_vector(vector<double> x, vector<double> y)
{
    assert(x.size() == y.size());
    vector<double> res;
    res.reserve(x.size());

    for (int i = 0; i < x.size(); i++)
    {
        res.push_back(x[i] * y[i]);
    }

    return res;
}

double sum(vector<double> vec)
{
    double sum;
    for (auto &i : vec)
    {
        sum += i;
    }

    return sum;
}

vector<double> cumsum(vector<double> vec)
{
    vector<double> res;

    double sum = 0;
    for (auto &i : vec)
    {
        sum += i;
        res.push_back(sum);
    }

    return res;
}

double mean(vector<double> vec)
{
    double total = sum(vec);

    return total / vec.size();
}

double dot_product(vector<double> x, vector<double> y)
{
    assert(x.size() == y.size());
    double sum = 0.0;
    for (int i = 0; i < x.size(); i++)
    {
        sum += x[i] * y[i];
    }

    return sum;
}

double sum_of_square(vector<double> a)
{
    return dot_product(a, a);
}

double magnitude(vector<double> a)
{
    return sqrt(sum_of_square(a));
}

double distance(vector<double> x, vector<double> y)
{
    vector<double> subs = substract_vector(x, y);
    return magnitude(subs);
}