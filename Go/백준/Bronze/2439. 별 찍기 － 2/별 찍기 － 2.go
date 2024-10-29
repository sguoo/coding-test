package main

import (
	"fmt"
)

func main() {
	var i int
	fmt.Scan(&i)
	for j := 1; j <= i; j++ {
		for k := i - j; k > 0; k-- {
			fmt.Print(" ")
		}
		for k := 0; k < j; k++ {
			fmt.Print("*")
		}
		fmt.Println()
	}
}
