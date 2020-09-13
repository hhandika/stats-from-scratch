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
    printf("%.4lf\n", sum);

    return EXIT_SUCCESS;
}

int calculate_factorial(int n) {
    if (n == 0) return 1;
    else if (n == 1) return n;
    else {
        return n * calculate_factorial(n - 1);
    }     
}

double calculate_euler_number(int n) {
    double sum;
    int numbers = 0;
    for (int i = 0; i < n; i++) {
        numbers++;
        sum += 1 / (double) calculate_factorial(numbers);
    }
    return sum + 1;
}