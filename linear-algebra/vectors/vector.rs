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
    
    println!("Sum x: {}", sum_vectors(&x));
    println!("Sum y: {}", sum_vectors(&y));
    println!("Mean x: {:.2}", mean_vectors(&x));
    println!("Mean y: {:.2}", mean_vectors(&y));
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

fn sum_vectors(x: &Vec<i32>) -> i32 {
    let mut sum = 0;
    for i in x.iter() {
        sum += i
    }
    sum
}

fn mean_vectors(vec: &Vec<i32>) -> f64 {
    let n = vec.len();
    let mean = sum_vectors(vec) as f64 / n as f64;

    mean
}