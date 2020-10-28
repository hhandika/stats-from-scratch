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
	x := [5]int32{1, 2, 3, 4, 5}
	y := [5]int32{10, 20, 30, 40, 50}

	sumX := sumVector(&x)
	sumY := sumVector(&y)

	fmt.Printf("Sum vec x: %d and y: %d\n", sumX, sumY)
}

func sumVector(vec *[5]int32) int32 {
	var sum int32 = 0
	for _, value := range vec {
		sum += value
	}
	return sum
}
