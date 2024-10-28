package main

import "fmt"

func main() {
	var i, j, k int
	fmt.Scan(&i, &j, &k)

	j += k

	i += j / 60
	j %= 60

	i %= 24

	fmt.Println(i, j)
}
