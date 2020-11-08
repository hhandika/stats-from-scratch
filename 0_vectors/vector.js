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
function substract_vectors(vec) {
    var result = [0];
    for (var i = 0; i < vec.x.length; i++) {
        result[i] = vec.x[i] - vec.y[i];
    }
    return result;
}
// Better for small vector size compare to reduce
// method.
function sum_vector(vec) {
    var sum = 0.0;
    for (var i = 0; i < vec.length; i++) {
        sum += vec[i];
    }
    return sum;
}
// Better for large vector size.
function sum_reduce(vec) {
    var sum = vec.reduce(function (accumulator, current) {
        return accumulator + current;
    });
    return sum;
}
function mean_vectors(vec) {
    var mean = sum_vector(vec) / vec.length;
    return mean;
}
function sum_using_of(vec) {
    var sum = 0.0;
    for (var _i = 0, vec_1 = vec; _i < vec_1.length; _i++) {
        var num = vec_1[_i];
        sum += num;
    }
    return sum;
}
var first_vector = { x: [10, 20, 30, 40, 50], y: [1, 2, 3, 4, 5] };
console.log("Vector addition: " +
    add_two_vectors(first_vector));
console.log("Vector substraction: " +
    substract_vectors(first_vector));
console.log("Sum vector x: " +
    sum_vector(first_vector.x));
console.log("Sum using reduce: " +
    sum_reduce(first_vector.x));
console.log("Mean vector x: " +
    mean_vectors(first_vector.x));
console.log("Sum vector using 'of' method: " +
    sum_using_of(first_vector.x));
