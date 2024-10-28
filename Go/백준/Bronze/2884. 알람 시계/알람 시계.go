package main

import "fmt"

func main() {
	var i, j int
	fmt.Scan(&i, &j)

	if j < 45 {
		j = j + 60 - 45
		if i == 0 {
			i = 23
		} else {
			i -= 1
		}
	} else {
		j -= 45
	}

	fmt.Println(i, j)
}
