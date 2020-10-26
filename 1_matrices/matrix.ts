/*
Heru Handika
25 October 2020
Add identity matrix
*/

function create_identity_matrix(size: number): number[][]{
    let mat: any[] = [];
    for (let rows = 0; rows < size; rows++) {
        mat[rows] = [];
        for (let cols = 0; cols < size; cols++) {
            if (rows == cols) {
                mat[rows][cols] = 1;
            } else {
                mat[rows][cols] = 0;
            }
        }
    }
    return mat;
}

function print_matrix(arr: number[][]) {
    for (let rows = 0; rows < arr.length; rows++) {
        for (let cols = 0; cols < arr.length; cols++) {
            console.log(arr[rows][cols]);
        }
    }
}

let mat: number[][] = create_identity_matrix(5)
console.log("Identity matrix: \n")
print_matrix(mat)