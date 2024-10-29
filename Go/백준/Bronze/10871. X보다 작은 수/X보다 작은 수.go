package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	read := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()
	var i, sml int
	fmt.Fscan(read, &i, &sml)
	j := make([]int, i)

	for k := 0; k < i; k++ {
		fmt.Fscan(read, &j[k])
	}

	for k := 0; k < i; k++ {
		if j[k] < sml {
			fmt.Fprint(writer, j[k], " ")
		}
	}
}
