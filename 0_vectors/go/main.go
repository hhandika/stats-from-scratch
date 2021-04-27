/*
Heru Handika
27 October 2020
Vector operation in go
*/
package main

import (
	"fmt"
)

func main() {
	x := []float64{1.0, 2.0, 3.0, 4.0, 5.0}
	y := []float64{10.0, 20.0, 30.0, 40.0, 50.0}

	fmt.Println("Vec ones: ", Ones(5))
	fmt.Printf("Sum vec x: %.2f and y: %.2f\n", Sum(x), Sum(y))
	fmt.Println("Mean x: ", Mean(x))
	fmt.Println("Vec addition: ", Add(x, y))
	fmt.Println("Vec subraction: ", Substract(x, y))
	fmt.Println("Vec multiplication: ", Multiply(x, y))
	fmt.Println("Cumsum: ", Cumsum(x))
}
