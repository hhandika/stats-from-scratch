/*
Heru Handika
19 September 2020
Vector operation modules
*/
// use std::f64;

pub mod vector {
    pub fn vector_ones(vec_size: usize) -> Vec<i32> {
        let mut vec_ones: Vec<i32> = Vec::with_capacity(vec_size);
        for _ in 0..vec_size {
            vec_ones.push(1);
        }
        vec_ones
    }

    pub fn add_two_vectors(x: &Vec<i32>, y: &Vec<i32>) -> Vec<i32>{
        let mut result = Vec::new();
    
        for (&i, &j) in x.iter().zip(y.iter()) {
            result.push(i + j);
        }
        result
    }

    pub fn substract_two_vectors(x: &Vec<i32>, y: &Vec<i32>) -> Vec<i32> {
        let mut result = Vec::new();
    
        for (&i, &j) in x.iter().zip(y.iter()) {
            result.push(i - j);
        }
        result
    }

    pub fn multiply_two_vectors(x: &Vec<i32>, y: &Vec<i32>) -> Vec<i32>{
        let mut result = Vec::new();
        
        for (&i, &j) in x.iter().zip(y.iter()) {
            result.push(i * j);
        }
        result
    }

    pub fn sum_vectors(x: &Vec<i32>) -> i32 {
        let mut sum = 0;
        for &i in x.iter() {
            sum += i;
        }
        sum
    }

    pub fn mean_vectors(vec: &Vec<i32>) -> f64 {
        let n = vec.len();
        let mean = sum_vectors(vec) as f64 / n as f64;
    
        mean
    }

    fn calculate_dot_product(x: &Vec<i32>, y: &Vec<i32>) -> f64 {
        let mut sum: f64 = 0.0;
        for (&i, &j) in x.iter().zip(y.iter()) {
            sum += i as f64 * j as f64;
        }
        sum
    }

    pub fn calculate_sum_of_square(vec: &Vec<i32>) -> f64 {
        calculate_dot_product(vec, vec)
    }

    fn compute_magnitude(vec: &Vec<i32>) -> f64 {
        calculate_sum_of_square(&vec).sqrt()
    }

    pub fn compute_vector_distance(x: &Vec<i32>, y: &Vec<i32>) -> f64 {
        let vec: Vec<i32> = substract_two_vectors(&x, &y);
        let dist = compute_magnitude(&vec);
        dist
    }
    
}
