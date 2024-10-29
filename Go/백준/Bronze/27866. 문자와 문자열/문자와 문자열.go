package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	reader := bufio.NewReader(os.Stdin)

	S, _ := reader.ReadString('\n')
	S = S[:len(S)-1]
	
	iStr, _ := reader.ReadString('\n')
	i, _ := strconv.Atoi(iStr[:len(iStr)-1])

	fmt.Println(string(S[i-1]))
}
