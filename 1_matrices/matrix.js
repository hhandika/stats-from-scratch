/*
Heru Handika
25 October 2020
Add identity matrix
*/
function create_identity_matrix(size) {
    var mat = [];
    for (var rows = 0; rows < size; rows++) {
        mat[rows] = [];
        for (var cols = 0; cols < size; cols++) {
            if (rows == cols) {
                mat[rows][cols] = 1;
            }
            else {
                mat[rows][cols] = 0;
            }
        }
    }
    return mat;
}
var mat = create_identity_matrix(5);
console.log("Identity matrix: \n");
console.log(mat);
