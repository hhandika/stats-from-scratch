/*
Heru Handika
15 September 2020
Find euler number using factorial division.
*/

package main

import("fmt")

func main() {
	var n int64 = 10;
	sum := calculate_euler_number(n);

	fmt.Printf("Euler number: %.8f\n", sum);	
}

func calculate_euler_number(n int64) (float64) {
	sum := 0.0;
	var i int64 = 1;
	for i < n {
		sum += 1.0 / float64(calculate_factorial(i));
		i++;
	}
	return sum + 1.0;
}

func calculate_factorial(n int64) (int64) {
	if n == 0 || n == 1 {
		return 1;
	} else {
		return n * calculate_factorial(n - 1);
	}
}