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
	fmt.Fprint(write, len(text))
}
