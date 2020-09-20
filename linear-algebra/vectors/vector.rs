/*
Heru Handika
19 September 2020
Vector addition and multiplication in rust
*/

fn main() {
    let x: Vec<i32> = vec![1, 2, 3, 4, 5];
    let y: Vec<i32> = vec![10, 20, 30, 40, 50];

    println!("Vector addition: {:?}", 
        add_two_vectors(&x, &y));

    println!("Vector multiplication: {:?}", 
        multiply_two_vectors(&x, &y));
}

fn add_two_vectors(x: &Vec<i32>, y: &Vec<i32>) -> Vec<i32>{
    let mut result = Vec::new();

    for (&i, &j) in x.iter().zip(y.iter()) {
        result.push(i + j);
    }
    result
}

fn multiply_two_vectors(x: &Vec<i32>, y: &Vec<i32>) -> Vec<i32>{
    let mut result = Vec::new();
    
    for (&i, &j) in x.iter().zip(y.iter()) {
        result.push(i * j);
    }
    result
}