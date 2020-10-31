//! Heru Handika
//! 31 October 2020
//! Range and Summary

struct Range<T> {
    min: T,
    max: T,
}

fn main() {
    let vec: Vec<i32> = vec![10, 20, 23, 24, 25, 
                            26, 27, 28, 29, 30];
    println!("Vector values: {:?}", &vec); 

    let values = range_value(&vec);
    println!("Value range: {}-{}", values.min, values.max);
}

fn min_vector(vec: &Vec<i32>) ->i32 {
    let mut min = vec[0];

    for &value in vec.iter() {
        if value < min {
            min = value;
        }
    }
    min
}

fn max_vector(vec: &Vec<i32>)-> i32 {
    let mut max = vec[0];

    for &value in vec.iter() {
        if value > max {
            max = value;
        }
    }
    max
}

fn range_value(vec: &Vec<i32>) -> Range<i32> {
    let values = Range{min: min_vector(&vec),
                        max: max_vector(&vec)};
    values
}