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
	var arr [30]string
	var n1 = -1
	var n2 = -1
	var count = 0

	for count = 0; n1 != 0 && n2 != 0; count++ {
		fmt.Fscan(reader, &n1, &n2)
		if n1 == 0 || n2 == 0 {
			break
		}
		if n2%n1 == 0 {
			arr[count] = "factor"
		} else if n1%n2 == 0 {
			arr[count] = "multiple"
		} else {
			arr[count] = "neither"
		}
	}

	for i := 0; i < count; i++ {
		fmt.Fprintln(writer, arr[i])
	}
}
