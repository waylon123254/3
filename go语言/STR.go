package main
     

import (
    "fmt"
)

// 定义老师对象
type Teacher struct {
    Name  string
    Age   int
    School string
}

func main() {
    var t1 Teacher
    t1.Name = "李老师"
    t1.Age = 30
    t1.School = "北京大学"
    fmt.Println(t1)


    var t *Teacher = new(Teacher)
    (*t).Name = "猜猜我是说"
    (*t).Age = 25
    (*t).School = "北京大学"
    fmt.Println(*t)

    var t2 = &Teacher{}
    t2.Name = "猜猜我"
    t2.Age = 25
    t2.School = "北京大学"
    fmt.Println(*t2)

}