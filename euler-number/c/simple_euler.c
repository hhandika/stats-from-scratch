/*
Heru Handika
12 September 2020
Find Euler's number using factorials
*/

#include <stdio.h>
#include <stdlib.h>

int calculate_factorial(int n);
double calculate_euler_number(int n);

int main(void) {
    int n = 10;
    double sum = calculate_euler_number(n);
    printf("%.8lf\n", sum);

    return EXIT_SUCCESS;
}

int calculate_factorial(int n) {
    if (n == 0 || n == 1) return 1;
    else {
        return n * calculate_factorial(n - 1);
    }     
}

double calculate_euler_number(int n) {
    double sum;
    int numbers = 1;
    while (numbers < n) {
        sum += 1.0 / (double) calculate_factorial(numbers);
        numbers++;
    }
    return sum + 1;
}