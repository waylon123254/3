package main

import "fmt"

func f1() {
	var a = [...]int{1, 2, 3}
	for i, v := range a {
		fmt.Printf("i: %v\n", i)
		fmt.Printf("v: %v\n", v)
	}
}

func main() {
	f1()
}