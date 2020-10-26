/*
Heru Handika
25 October 2020
Typescript implementation for 
vector operation
*/

function add_two_vectors(x: number[], y: number[]): number[] {
    let result: number[] = [0];
    for (let i = 0; i < x.length; i++) {
            result[i] = x[i] + y[i];
    }
    return result;
}

function sum_vector(x: number[], y: number[]): number {
    let sum: number = 0.0;
    for (let i = 0; i < x.length; i++) {
        sum += x[i] + y[i];
    }
    return sum;
}

let x: number[] = [1, 2, 3, 4, 5];
let y: number[] = [10, 20, 30, 40, 50];
console.log(add_two_vectors(x, y))
console.log(sum_vector(x, y))