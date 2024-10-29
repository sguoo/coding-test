package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var i int
	fmt.Fscan(reader, &i)

	if i == 0 {
		return
	}

	arr := make([]int, i)
	for j := 0; j < i; j++ {
		fmt.Fscan(reader, &arr[j])
	}

	min, max := arr[0], arr[0]
	for _, v := range arr {
		if v < min {
			min = v
		}
		if v > max {
			max = v
		}
	}

	fmt.Fprint(writer, min, max)
}
