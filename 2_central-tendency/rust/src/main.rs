//! Heru Handika
//! 29 October 2020
//! Central tendency
mod ctd;

use ctd::stat_desc as desc;

fn main() {
    let vec: Vec<i32> = vec![10, 27, 23, 24, 25, 
                            26, 27, 28, 29, 30];
    println!("No of values in vector: {}", 
        desc::size(&vec));
    println!("Sum values: {}", desc::sum(&vec));
    println!("Mean: {}", desc::mean(&vec));
    println!("Min values: {}", desc::min(&vec));
    println!("Max values: {}", desc::max(&vec));
    println!("Non idiomatic Max values: {}", 
        desc::max_values(&vec));
    println!("Non idiomatic Min values: {}", 
        desc::min_values(&vec));

    println!("Sort int vec: {:?}", desc::sort_i32(&vec));
    
    let vec_dob: Vec<f64> = vec![13.2, 13.5, 10.3, 12.0,
                                20.1, 50.3, 15.4, 10.3, 11.0];
    
    println!("Sort vector: {:?}", desc::sort_f64(&vec_dob));
    println!("Median vector: {}", desc::median(&vec_dob));

    desc::print_quantile(&vec_dob)
   
}