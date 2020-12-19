//! Heru Handika
//! 29 October 2020
//! Central tendency

fn main() {
    let vec: Vec<i32> = vec![10, 27, 23, 24, 25, 
                            26, 27, 28, 29, 30];
    println!("No of values in vector: {}", 
        vector_size(&vec));
    println!("Sum values: {}", sum_vector(&vec));
    println!("Mean: {}", mean_vector(&vec));
    println!("Min values: {}", min_vector(&vec));
    println!("Max values: {}", max_vector(&vec));
    println!("Non idiomatic Max values: {}", 
        max_values(&vec));
    println!("Non idiomatic Min values: {}", 
        min_values(&vec));

    println!("Sort int vec: {:?}", sort_vector_int(&vec));
    
    let vec_dob: Vec<f64> = vec![13.2, 13.5, 10.3, 12.0,
                                20.1, 50.3, 15.4, 10.3, 11.0];
    
    println!("Sort vector: {:?}", sort_vector(&vec_dob));
    println!("Median vector: {}", find_median(&vec_dob));

    print_quantile(&vec_dob)
   
}

fn vector_size(vec: &Vec<i32>) -> usize {
    vec.len()
}

fn sort_vector(vec: &Vec<f64>) -> Vec<f64> {
    let mut vec_sorted = vec.to_vec();
    vec_sorted.sort_by(|a, b| a.partial_cmp(b).unwrap());
    vec_sorted
}

fn sort_vector_int(vec: &Vec<i32>) -> Vec<i32> {
    let mut vec_sorted = vec.to_vec();
    vec_sorted.sort();
    vec_sorted
}

fn sum_vector(vec: &Vec<i32>) -> i32 {
    let mut sum = 0;
    for i in vec.iter() {
        sum += i;
    }
    sum
}

fn mean_vector(vec: &Vec<i32>) -> f64 {
    let len = vec.len();
    sum_vector(vec) as f64 / len as f64
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

fn find_median(vec: &Vec<f64>) -> f64 {
    let vec_sorted = sort_vector(&vec);
    let vec_size = vec_sorted.len();
    let hi_midpoint = vec_size / 2;

    let median;
    if vec_size % 2 == 0  {
       median = (vec_sorted[hi_midpoint - 1] + vec_sorted[hi_midpoint]) / 2.0;
    } else {
        median = vec_sorted[hi_midpoint];
    }
    median
}

fn find_quantile(vec: &Vec<f64>, percentile: f64) -> f64 {
    let vec_sorted = sort_vector(&vec);
    let vec_size = vec_sorted.len();
    let index = percentile * vec_size as f64;
    vec_sorted[index.round() as usize]
}

fn print_quantile(vec: &Vec<f64>) {
    let quantile = [0.10, 0.25, 0.75, 0.90];
    for &i in &quantile {
        println!("Quantile {:0}%: {:2}", 
            i * 100.0, find_quantile(&vec, i));
    }
}