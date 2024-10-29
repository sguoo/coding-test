package main

import (
	"fmt"
)

func main() {
	var i, p, count int
	fmt.Scan(&i)
	j := make([]int, i)
	for k := 0; k < i; k++ {
		fmt.Scan(&j[k])
	}
	fmt.Scan(&p)
	for q := 0; q < i; q++ {
		if j[q] == p {
			count++
		}
	}
	fmt.Println(count)
}
