/*
Heru Handika
25 October 2020
Typescript implementation for
vector operation
*/
function add_two_vectors(x, y) {
    var result = [0];
    for (var i = 0; i < x.length; i++) {
        result[i] = x[i] + y[i];
    }
    return result;
}
function sum_vector(x, y) {
    var sum = 0.0;
    for (var i = 0; i < x.length; i++) {
        sum += x[i] + y[i];
    }
    return sum;
}
var x = [1, 2, 3, 4, 5];
var y = [10, 20, 30, 40, 50];
console.log(add_two_vectors(x, y));
console.log(sum_vector(x, y));
