/*
Heru Handika
19 September 2020
Vector addition and multiplication in rust
*/
mod linear_algebra;

use linear_algebra::vector as vec;

fn main() {
    let x: Vec<i32> = vec![1, 2, 3, 4, 5];
    let y: Vec<i32> = vec![10, 20, 30, 40, 50];

    println!("Vector ones: {:?}",
        vec::vector_ones(5));

    println!("Vector addition: {:?}", 
        vec::add_two_vectors(&x, &y));

    println!("Vector substraction: {:?}",
        vec::substract_two_vectors(&x, &y));

    println!("Vector multiplication: {:?}", 
        vec::multiply_two_vectors(&x, &y));
    
    println!("Sum x: {}", vec::sum_vectors(&x));
    println!("Sum y: {}", vec::sum_vectors(&y));
    println!("Cumsum x: {:?}", vec::cumsum(&x));
    println!("Mean x: {:.2}", vec::mean_vectors(&x));
    println!("Mean y: {:.2}", vec::mean_vectors(&y));

    println!("Sum of square x: {:.2}", 
        vec::calculate_sum_of_square(&x));

 
    println!("Sum of square y: {:.2}", 
        vec::calculate_sum_of_square(&y));
    println!("X & Y distance: {:.4}", 
        vec::compute_vector_distance(&x, &y));
}
