/*
Heru Handika
13 September 2020
Find Euler's number using factorials
*/

fn main() {
    let n = 10;
    let sum = calculate_euler_number(n);

    println!("Euler number {.4}", sum);
}

fn calculate_factorial(n: i64) -> i64 {
    if n == 0 || n == 1 {
        return 1;
    } else {
        return n * calculate_factorial(n - 1)
    }
}

fn calculate_euler_number(n: i64) -> f64 {
    let mut numbers = 1;
    let mut sum: f64 = 0.0;
    while numbers < n {
        sum += 1.0 / calculate_factorial(numbers) as f64;
        numbers += 1;
    }
    sum + 1.0
}