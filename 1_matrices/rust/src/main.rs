//! Heru Handika
//! 29 October 2020
//! Matrix

mod matrix;

use matrix::matrix as mat;

fn main() {
    const ROWS: usize = 6;
    const COLS: usize = 6;
    let mat = mat::create_identity_matrix(ROWS, COLS);
    mat::print_matrix(&mat);
}