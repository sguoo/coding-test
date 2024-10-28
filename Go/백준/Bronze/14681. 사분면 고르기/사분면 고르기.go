package main

import "fmt"

func main() {
	var i, j int
	fmt.Scan(&i, &j)
	if i > 0 && j > 0 {
		fmt.Println("1")
	} else if i < 0 && j > 0 {
		fmt.Println("2")
	} else if i < 0 && j < 0 {
		fmt.Println("3")
	} else if i > 0 && j < 0 {
		fmt.Println("4")
	}
}
