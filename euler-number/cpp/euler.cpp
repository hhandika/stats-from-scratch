/*
Heru Handika
13 September 2020
Find Euler's number using factorials
*/

#include <iostream>

using namespace std;

class Euler {
private:
    int counters = 1;
    double sum = 0;
public:
    int max;
    int calculate_factorial(int n);
    double calculate_euler_number();
};

int Euler::calculate_factorial(int n) {
    if (n == 0 || n == 1) return 1;
    else {
        return n * calculate_factorial(n - 1);
    }
}
    
double Euler::calculate_euler_number() {
    while (counters < max) {
        sum += 1.0 / (double) calculate_factorial(counters);
        counters++;
    }
    return sum + 1;
}

int main(void) {
    Euler num;

    num.max = 10;
    cout << "Euler's numbers: " << num.calculate_euler_number() << endl;
}