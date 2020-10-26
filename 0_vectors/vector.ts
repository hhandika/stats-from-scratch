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

function add_two_vectors(vec: Vectors): number[] {
    let result: number[] = [0];
    for (let i = 0; i < vec.x.length; i++) {
            result[i] = vec.x[i] + vec.y[i];
    }
    return result;
}

function sum_vector(vec: Vectors): number {
    let sum: number = 0.0;
    for (let i = 0; i < vec.x.length; i++) {
        sum += vec.x[i] + vec.y[i];
    }
    return sum;
}
 
let first_vector = {x: [10, 20, 30, 40, 50], y: [1, 2, 3, 4, 5]}

console.log(add_two_vectors(first_vector))
console.log(sum_vector(first_vector))