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

	var count int
	fmt.Fscan(reader, &count)
	text := make([]string, count)
	for i := 0; i < count; i++ {
		fmt.Fscan(reader, &text[i])
	}
	for i := 0; i < count; i++ {
		fmt.Fprintln(write, string(text[i][0])+string(text[i][len(text[i])-1]))
	}
}
