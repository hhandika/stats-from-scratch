/*
Heru Handika
25 October 2020
Typescript implementation for
vector operation
*/
function add_two_vectors(vec) {
    var result = [0];
    for (var i = 0; i < vec.x.length; i++) {
        result[i] = vec.x[i] + vec.y[i];
    }
    return result;
}
function sum_vector(vec) {
    var sum = 0.0;
    for (var i = 0; i < vec.length; i++) {
        sum += vec[i];
    }
    return sum;
}
var first_vector = { x: [10, 20, 30, 40, 50], y: [1, 2, 3, 4, 5] };
console.log(add_two_vectors(first_vector));
console.log(sum_vector(first_vector.x));
