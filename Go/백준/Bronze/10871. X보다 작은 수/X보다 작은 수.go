package main

import (
	"fmt"
)

func main() {
	var i, sml int
	fmt.Scan(&i)
	fmt.Scan(&sml)
	j := make([]int, i)

	for k := 0; k < i; k++ {
		fmt.Scan(&j[k])
	}

	for k := 0; k < i; k++ {
		if j[k] < sml {
			fmt.Print(j[k], " ")
		}
	}
}
