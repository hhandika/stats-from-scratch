package main

func Ones(size uint32) []float64 {
	res := make([]float64, size)

	for i := range res {
		res[i] = 1.0
	}

	return res
}

func Add(x []float64, y []float64) []float64 {
	if len(x) != len(y) {
		panic("UNEQUAL VECTOR LENGTH")
	}

	res := make([]float64, len(x))

	for i := range x {
		res[i] = x[i] + y[i]
	}
	return res
}

func Substract(x []float64, y []float64) []float64 {
	if len(x) != len(y) {
		panic("UNEQUAL VECTOR LENGTH")
	}

	res := make([]float64, len(x))

	for i := range x {
		res[i] = x[i] - y[i]
	}

	return res
}

func Multiply(x []float64, y []float64) []float64 {
	if len(x) != len(y) {
		panic("UNEQUAL VECTOR LENGTH")
	}

	res := make([]float64, len(x))

	for i := range x {
		res[i] = x[i] * y[i]
	}

	return res
}

func Cumsum(vec []float64) []float64 {
	res := make([]float64, len(vec))

	sum := 0.0
	for i, val := range vec {
		sum += val
		res[i] = sum
	}

	return res
}

func Sum(vec []float64) float64 {
	var sum float64 = 0
	for _, val := range vec {
		sum += val
	}
	return sum
}

func Mean(vec []float64) float64 {
	return Sum(vec) / float64(len(vec))
}
