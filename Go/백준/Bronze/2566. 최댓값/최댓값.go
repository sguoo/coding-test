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
	var maxCol, maxRow, maxNumber int
	var arr [9][9]int
	for i := 0; i < 9; i++ {
		for j := 0; j < 9; j++ {
			fmt.Fscan(reader, &arr[i][j])
		}
	}
	maxNumber = arr[0][0]

	for i := 0; i < 9; i++ {
		for j := 0; j < 9; j++ {
			if maxNumber < arr[i][j] {
				maxNumber = arr[i][j]
				maxCol = i
				maxRow = j
			}
		}
	}
	fmt.Fprint(write, maxNumber, "\n", maxCol+1, maxRow+1)

}
