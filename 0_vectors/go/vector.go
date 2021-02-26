/*
Heru Handika
27 October 2020
Vector operation in go
*/

package main

import ("fmt")

func main() {
	x := []float64{1.0, 2.0, 3.0, 4.0, 5.0}
	y := []float64{10.0, 20.0, 30.0, 40.0, 50.0}

	fmt.Println("Vec ones: ", ones(5))
	fmt.Printf("Sum vec x: %.2f and y: %.2f\n", sum(x), sum(y))
	fmt.Println("Mean x: ", mean(x))
	fmt.Println("Vec addition: ", add(x, y))
	fmt.Println("Vec subraction: ", substract(x, y))
	fmt.Println("Vec multiplication: ", multiply(x, y))
	fmt.Println("Cumsum: ", cumsum(x))
}

func ones(size uint32) []float64 {
	res := make([]float64, size)

	for i := range res {
		res[i] = 1.0
	}

	return res
}

func add(x []float64, y []float64) []float64 {
	if len(x) != len(y) {
		panic("UNEQUAL VECTOR LENGTH")
	}

	res := make([]float64, len(x))

	for i := range x {
		res[i] = x[i] + y[i]
	}
	return res
}

func substract(x []float64, y []float64) []float64 {
	if len(x) != len(y) {
		panic("UNEQUAL VECTOR LENGTH")
	}

	res := make([]float64, len(x))

	for i := range x {
		res[i] = x[i] - y[i]
	}

	return res
}

func multiply(x []float64, y []float64) []float64 {
	if len(x) != len(y) {
		panic("UNEQUAL VECTOR LENGTH")
	}

	res := make([]float64, len(x))

	for i := range x {
		res[i] = x[i] * y[i]
	}

	return res
}

func cumsum(vec []float64) []float64 {
	res := make([]float64, len(vec))
	
	sum := 0.0
	for i, val := range vec {
		sum += val
		res[i] = sum
	}

	return res
}


func sum(vec []float64) float64 {
	var sum float64 = 0
	for _, val := range vec {
		sum += val
	}
	return sum
}


func mean(vec []float64) float64 {
	return sum(vec) / float64(len(vec))
}