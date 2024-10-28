package main

import (
	"fmt"
)

func main() {
	var i, n1, n2 int
	fmt.Scan(&i)
	sum := make([]int, i)
	for j := 0; j < i; j += 1 {
		fmt.Scan(&n1, &n2)
		sum[j] = n1 + n2
	}
	for j := 0; j < i; j += 1 {
		fmt.Printf("Case #%d: %d\n", j+1, sum[j])
	}

}
