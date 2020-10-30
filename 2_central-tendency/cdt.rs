//! Heru Handika
//! 29 October 2020
//! Central tendency

fn main() {
    let vec: Vec<i32> = vec![10, 20, 23, 24, 25, 
                            26, 27, 28, 29, 30];

    println!("Sum values: {}", sum_vector(&vec));
    println!("Min values: {}", min_vector(&vec));
    println!("Max values: {}", max_vector(&vec));
    println!("Non idiomatic Max values: {}", 
        max_values(&vec));
    println!("Non idiomatic Min values: {}", 
        min_values(&vec));
}

fn sum_vector(vec: &Vec<i32>) -> i32 {
    let mut sum = 0;
    for i in vec.iter() {
        sum += i;
    }
    sum
}

fn min_vector(vec: &Vec<i32>) -> i32 {
    let min = vec.iter().min();
    match min {
        Some(i) => *i,
        None => 0,
    }
}

fn max_vector(vec: &Vec<i32>) -> i32 {
    let max = vec.iter().max();
    match max {
        Some(i) => *i,
        None => 0,
    }
}

// Not idiomatic rust
fn max_values(vec: &Vec<i32>) -> i32 {
    let mut max = 0;
    for &i in vec.iter() {
        if i > max {
            max = i
        }
    }
    max
}

// Not idiomatic rust
fn min_values(vec: &Vec<i32>) -> i32 {
    let mut min = vec[0];
    for &i in vec.iter() {
        if i < min{
            min = i
        }
    }
    min
}