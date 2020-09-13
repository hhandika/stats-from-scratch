/*
Heru Handika
12 September 2020
Find Euler's number using factorials
*/

#include <stdio.h>
#include <stdlib.h>

void clear_system();
int get_user_inputs(void);
int print_options(void);
long calculate_factorial(int n);
double calculate_euler_number(int n);



int main(void) {
    int n = print_options();
    switch (n) {
    case 1:
        clear_system();
        int numbers = get_user_inputs();
        long result = calculate_factorial(numbers);
        printf("The factorial is: %ld\n", result);
        break;
    case 2:
        clear_system();
        int n_max = 20;
        double sum = calculate_euler_number(n_max);
        printf("%.4lf\n", sum);
        break;
    default:
        printf("Invalid options\n");
        exit(EXIT_FAILURE);
        break;
    }
    
    return EXIT_SUCCESS;
}

void clear_system() {
    system("clear");
    printf("Enter a number: \n");
}

int get_user_inputs(void) {
    int user_input;
    printf("> ");
    scanf("%d", &user_input);

    return user_input;
}

int print_options(void) {
    
    printf("What would you like to do?\n");
    printf("1. Calculate factorial\n"
           "2. View euler numbers\n");
    int user_input = get_user_inputs();

    return user_input;
}

long calculate_factorial(int n) {
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