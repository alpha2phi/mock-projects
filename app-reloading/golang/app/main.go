package main

import (
	"fmt"
	"github.com/alpha2phi/greetings"
)

func main() {
	message := greetings.Hello("alpha2phi...")
	fmt.Println(message)
}
