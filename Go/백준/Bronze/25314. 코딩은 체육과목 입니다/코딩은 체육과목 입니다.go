package main

import (
	"fmt"
)

func main() {
	var i int
	fmt.Scan(&i)
	for j := 0; j < i; j += 4 {
		fmt.Print("long ")
	}
	fmt.Println("int")
}
