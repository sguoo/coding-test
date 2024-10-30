package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	write := bufio.NewWriter(os.Stdout)
	defer write.Flush()
	var col, row int
	fmt.Fscan(reader, &row, &col)
	twodArray := make([][]int, row)
	twoArray := make([][]int, row)
	for i := 0; i < row; i++ {
		twodArray[i] = make([]int, col)
		twoArray[i] = make([]int, col)
	}

	for i := 0; i < row; i++ {
		for j := 0; j < col; j++ {
			fmt.Fscan(reader, &twodArray[i][j])
		}
	}

	for i := 0; i < row; i++ {
		for j := 0; j < col; j++ {
			fmt.Fscan(reader, &twoArray[i][j])
		}
	}

	for i := 0; i < row; i++ {
		for j := 0; j < col; j++ {
			twodArray[i][j] += twoArray[i][j]
		}
	}

	for i := 0; i < row; i++ {
		for j := 0; j < col; j++ {
			fmt.Fprint(write, twodArray[i][j], " ")
		}
		fmt.Fprintln(write)
	}
}
