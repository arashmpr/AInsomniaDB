package main

import (
	"fmt"
	"os"
	"strings"
	"bufio"
)

type CommandHandler struct {
	input string
	command string
	args []string
}

func (ch *CommandHandler) parse() {
	parts := strings.Fields(ch.input)

	ch.command = parts[0]
	ch.args = parts[1:]
}

func main() {
	version := os.Getenv("VERSION")
	fmt.Println("AInsomnia ", version)

    scanner := bufio.NewScanner(os.Stdin)
    for {
		fmt.Print(">> ")
		var input string

		if scanner.Scan() {
			input = scanner.Text()
		}

		command_handler := CommandHandler{input:input}
		command_handler.parse()

		switch command_handler.command {
		case "create":
			fmt.Println("An instance is created")
		case "exit":
			fmt.Println("It should stop")
			os.Exit(0)
		case "help":
			fmt.Println("Help Speisekarte")
		default:
			fmt.Println("No such command exists")
		}

    }
}
