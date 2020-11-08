/*
Heru Handika
25 October 2020
Typescript implementation for 
vector operation
*/

interface Vectors {
    x: number[];
    y: number[];
}

function vector_ones(vec_size: number): number[] {
    let vec_ones: number[] = [0];
    for (let val = 0; val < vec_size; val++) {
        vec_ones[val] = 1;
    }
    return vec_ones;
}

function add_two_vectors(vec: Vectors): number[] {
    let result: number[] = [0];
    for (let i = 0; i < vec.x.length; i++) {
            result[i] = vec.x[i] + vec.y[i];
    }
    return result;
}

function substract_vectors(vec: Vectors): number[] {
    let result: number[] = [0]
    for (let i = 0; i < vec.x.length; i++) {
        result[i] = vec.x[i] - vec.y[i];
}
return result;
}

// Better for small vector size compare to reduce
// method.
function sum_vector(vec: number[]): number {
    let sum: number = 0.0;
    for (let i = 0; i < vec.length; i++) {
        sum += vec[i];
    }
    return sum;
}

// Better for large vector size.
function sum_reduce(vec: number[]): number {
    let sum = vec.reduce((accumulator, current) =>
        accumulator + current);
    return sum;
}

function mean_vectors(vec: number[]): number {
    let mean = sum_vector(vec) / vec.length;
    return mean;
}

function sum_using_of(vec: number[]): number {
    let sum: number = 0.0;
    for (let num of vec) {
        sum += num;
    }
    return sum;
}
 
let first_vector = {x: [10, 20, 30, 40, 50], y: [1, 2, 3, 4, 5]}

console.log("Vector ones: " +
    vector_ones(5));
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