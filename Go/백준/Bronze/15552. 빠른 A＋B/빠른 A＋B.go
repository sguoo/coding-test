package main

import (
    "bufio"
    "fmt"
    "os"
)

var reader *bufio.Reader = bufio.NewReader(os.Stdin)
var writer *bufio.Writer = bufio.NewWriter(os.Stdout)

func main() {
    defer writer.Flush()

    var T int
    fmt.Fscan(reader, &T)
    for i := 0; i < T; i++ {
        var A, B int
        fmt.Fscan(reader, &A, &B)
        fmt.Fprintln(writer, A+B)
    }
}

