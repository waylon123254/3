package main

import (
    "fmt"
)

type Hero struct {
    Name string
    Ad   int16

}

func (this Hero) Show() {
    fmt.Println("Hero=", this.Name)
}

func (this Hero) GetName() string {
    return this.Name
}

func main() {
    hero := Hero{Name: "张三", Ad: 100}
    hero.Show()
}