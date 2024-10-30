package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	word, _ := reader.ReadString('\n')
	word = word[:len(word)-1]

	positions := make([]int, 26)
	for i := range positions {
		positions[i] = -1
	}

	for i, ch := range word {
		index := ch - 'a'
		if positions[index] == -1 {
			positions[index] = i
		}
	}

	// 결과 출력
	for _, pos := range positions {
		fmt.Printf("%d ", pos)
	}
}
