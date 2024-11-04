package main

import (
	"bufio"
	"fmt"
	"os"
)

func isPrime(n int) bool {
	if n < 2 {
		return false
	}
	for i := 2; i*i <= n; i++ {
		if n%i == 0 {
			return false
		}
	}
	return true
}

func main() {
	writer := bufio.NewWriter(os.Stdout)
	reader := bufio.NewReader(os.Stdin)
	defer writer.Flush()

	var size, answer int
	fmt.Fscan(reader, &size)
	arr := make([]int, size)

	for i := 0; i < size; i++ {
		fmt.Fscan(reader, &arr[i])
	}

	for i := 0; i < size; i++ {
		if isPrime(arr[i]) {
			answer++
		}
	}
	fmt.Fprintln(writer, answer)
}
