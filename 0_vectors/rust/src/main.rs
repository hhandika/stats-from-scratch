/*
Heru Handika
19 September 2020
Vector addition and multiplication in rust
*/

mod linear_algebra;

fn main() {
    let x: Vec<i32> = vec![1, 2, 3, 4, 5];
    let y: Vec<i32> = vec![10, 20, 30, 40, 50];

    println!("Vector ones: {:?}",
        linear_algebra::vector::vector_ones(5));

    println!("Vector addition: {:?}", 
        linear_algebra::vector::add_two_vectors(&x, &y));

    println!("Vector substraction: {:?}",
        linear_algebra::vector::substract_two_vectors(&x, &y));

    println!("Vector multiplication: {:?}", 
        linear_algebra::vector::multiply_two_vectors(&x, &y));
    
    println!("Sum x: {}", linear_algebra::vector::sum_vectors(&x));
    println!("Sum y: {}", linear_algebra::vector::sum_vectors(&y));
    println!("Mean x: {:.2}", linear_algebra::vector::mean_vectors(&x));
    println!("Mean y: {:.2}", linear_algebra::vector::mean_vectors(&y));

    println!("Sum of square x: {:.2}", 
        linear_algebra::vector::calculate_sum_of_square(&x));
    println!("Sum of square y: {:.2}", 
        linear_algebra::vector::calculate_sum_of_square(&y));
    println!("X & Y distance: {:.4}", 
        linear_algebra::vector::compute_vector_distance(&x, &y));
}
