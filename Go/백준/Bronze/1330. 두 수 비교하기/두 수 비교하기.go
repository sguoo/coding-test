package main

import "fmt"

func main() {
	var i, k int
	fmt.Scan(&i, &k)
	if i > k {
		fmt.Println(">")
	} else if i < k {
		fmt.Println("<")
	} else {
		fmt.Println("==")
	}
}
