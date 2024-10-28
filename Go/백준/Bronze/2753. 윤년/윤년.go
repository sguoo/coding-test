package main

import "fmt"

func main() {
	var i int
	fmt.Scan(&i)
	if i%4 == 0 && i%100 != 0 {
		fmt.Println("1")
	} else if i%400 == 0 {
		fmt.Println("1")
	} else {
		fmt.Println("0")
	}
}
