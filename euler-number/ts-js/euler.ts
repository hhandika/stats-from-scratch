/*
Heru Handika
25 October 2020
Euler number implementation
in typescript
*/

function calculate_factorial(n: number): number {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calculate_factorial(n - 1);
    }
}

function calculate_euler_number(n: number): number {
    let sum = 0.0;
    let i = 0;
    while (i < n) {
        sum += 1.0 / calculate_factorial(i);
        i += 1;
    }
    return sum;
}

let n = 10.0;
console.log(calculate_euler_number(n).toPrecision(5))