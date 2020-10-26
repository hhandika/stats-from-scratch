/*
Heru Handika
25 October 2020
Euler number implementation
in typescript
*/
function calculate_factorial(n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * calculate_factorial(n - 1);
    }
}
function calculate_euler_number(n) {
    var sum = 0.0;
    var i = 1;
    while (i < n) {
        sum += 1.0 / calculate_factorial(i);
        i += 1;
    }
    return sum + 1;
}
var n = 10.0;
console.log(calculate_euler_number(n).toPrecision(5));
