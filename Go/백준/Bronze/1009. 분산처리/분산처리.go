package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
)

func main() {
	results := []int{}
	reader := bufio.NewReader(os.Stdin)
	var re int

	fmt.Fscanln(reader, &re)

	for i := 0; i < re; i++ {
		var a, b int
		fmt.Fscanln(reader, &a, &b)

		b = b % 4
		if b == 0 {
			b = 4
		}

		result := int(math.Pow(float64(a), float64(b))) % 10
		if result == 0 {
			results = append(results, 10)
		} else {
			results = append(results, result)
		}
	}
	for _, value := range results {
		fmt.Println(value)
	}
}
