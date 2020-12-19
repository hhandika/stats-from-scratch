//! Heru Handika
//! 31 October 2020
//! Range and Summary

use std::iter::Iterator; // For sum function

struct Range<T> {
    min: T,
    max: T,
}

fn main() {
    let vec: Vec<f64> = vec![10.0, 20.0, 23.0, 24.0, 25.0, 
                            26.0, 27.0, 28.0, 29.0, 30.0];
    
    print_vector(&vec);
    
    let values = range_value(&vec);
    println!("Value range: {}-{}", values.min, values.max);

    println!("Mean: {}", mean_vec(&vec));
}

fn print_vector(vec: &Vec<f64>) {
    print!("Vector values: ");
    for &i in vec {
        print!("{} ",i);
    }
    println!();
}

fn min_vector(vec: &Vec<f64>) -> f64 {
    let mut min = vec[0];

    for &value in vec.iter() {
        if value < min {
            min = value;
        }
    }
    min
}

fn max_vector(vec: &Vec<f64>) -> f64 {
    let mut max = vec[0];

    for &value in vec.iter() {
        if value > max {
            max = value;
        }
    }
    max
}

fn range_value(vec: &Vec<f64>) -> Range<f64> {
    let values = Range{min: min_vector(&vec),
                        max: max_vector(&vec)};
    values
}

// Using iterator for sum. Functional style.
// More compact, but not sure about performance.
// For loop implementation for sum is available
// in 0_vectors/vector.rs
fn mean_vec(vec: &Vec<f64>) -> f64 {
    let sum: f64 = Iterator::sum(vec.iter());
    let mean = sum / vec.len() as f64;
    mean
}

