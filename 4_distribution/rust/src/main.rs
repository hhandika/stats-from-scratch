//! Heru Handika
//! 21 December 2020
//! Probability distribution
//! implementation in rust.
mod dist;

fn main() {
    let mu = 0.0;
    let sig = 1.0;

    let mut norm: Vec<f64> = Vec::new();
    let mut n;
    let mut x;
    for i in -50..50 {
        x = i as f64;
        n = dist::normal(&x, &mu, &sig);
        norm.push(n);
    }
     
    print_arr(&norm);
}

fn print_arr(a: &Vec<f64>) {
    print!("(");
    for &i in a {
        print!("{:.4}, ", i);
    }
    println!(")");
}