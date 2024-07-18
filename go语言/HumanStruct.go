package main

import (
    "fmt"
)

type Human struct{
	name string
	sex  string

}

func (this *Human)Eat(){
	fmt.Println("")
}

func (this *Human)Walk(){
	fmt.Println("")
}

func SuperMan struct{
	Human
	level int16
}

