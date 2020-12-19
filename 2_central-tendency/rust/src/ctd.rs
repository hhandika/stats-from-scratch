pub mod stat_desc {
    pub fn size(vec: &Vec<i32>) -> usize {
        vec.len()
    }
    pub fn sort_f64(vec: &Vec<f64>) -> Vec<f64> {
        let mut vec_sorted = vec.to_vec();
        vec_sorted.sort_by(|a, b| a.partial_cmp(b).unwrap());
        vec_sorted
    }

    pub fn sort_i32(vec: &Vec<i32>) -> Vec<i32> {
        let mut vec_sorted = vec.to_vec();
        vec_sorted.sort();
        vec_sorted
    }

    pub fn sum(vec: &Vec<i32>) -> i32 {
        let mut sum = 0;
        for i in vec.iter() {
            sum += i;
        }
        sum
    }

    pub fn mean(vec: &Vec<i32>) -> f64 {
        let len = vec.len();
        sum(vec) as f64 / len as f64
    }
    
    pub fn min(vec: &Vec<i32>) -> i32 {
        let min = vec.iter().min();
        match min {
            Some(i) => *i,
            None => 0,
        }
    }
    
    pub fn max(vec: &Vec<i32>) -> i32 {
        let max = vec.iter().max();
        match max {
            Some(i) => *i,
            None => 0,
        }
    }

    // Not idiomatic rust
    pub fn max_values(vec: &Vec<i32>) -> i32 {
        let mut max = 0;
        for &i in vec.iter() {
            if i > max {
                max = i
            }
        }
        max
    }

    // Not idiomatic rust
    pub fn min_values(vec: &Vec<i32>) -> i32 {
        let mut min = vec[0];
        for &i in vec.iter() {
            if i < min{
                min = i
            }
        }
        min
    }

    pub fn median(vec: &Vec<f64>) -> f64 {
        let vec_sorted = sort_f64(&vec);
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
    
    pub fn quantile(vec: &Vec<f64>, percentile: f64) -> f64 {
        let vec_sorted = sort_f64(&vec);
        let vec_size = vec_sorted.len();
        let index = percentile * vec_size as f64;
        vec_sorted[index.round() as usize]
    }
    
    pub fn print_quantile(vec: &Vec<f64>) {
        let quant = [0.10, 0.25, 0.75, 0.90];
        for &i in &quant {
            println!("Quantile {:0}%: {:2}", 
                i * 100.0, quantile(&vec, i));
        }
    }
}













