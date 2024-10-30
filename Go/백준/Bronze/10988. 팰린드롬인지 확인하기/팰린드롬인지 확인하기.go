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
	var text string
	fmt.Fscan(reader, &text)
	if text == reverse(text) {
		fmt.Fprint(write, "1")
	} else {
		fmt.Fprint(write, "0")
	}
}

func reverse(slice string) string {
	runes := []rune(slice)
	for i, j := 0, len(runes)-1; i < j; i, j = i+1, j-1 {
		runes[i], runes[j] = runes[j], runes[i]
	}
	return string(runes)
}
