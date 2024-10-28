package main

import "fmt"

func sum(numbers []int, counts []int) int {
	total := 0
	for i, number := range numbers {
		total += number * counts[i]
	}
	return total
}

func main() {
	var collect, counts int
	fmt.Scan(&collect, &counts)
	price := make([]int, counts)
	count := make([]int, counts)
	for i := 0; i < counts; i++ {
		fmt.Scan(&price[i])
		fmt.Scan(&count[i])
	}
	if sum(price, count) == collect {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
