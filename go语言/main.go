package main  // 声明 main 包，表明当前是一个可执行程序

import ("fmt"
        "io"
        "os"
        "math/rand" 
) // 导入内置

func main(){  // main函数，是程序执行的入口
    fmt.Println("Hello World!")  // 在终端打印 Hello World!
    fmt.Println("计算列表")
    fmt.Println(18-1)
    fmt.Println(18/1)
    fmt.Println(18*1)
    fmt.Println("填充")
   // go 中格式化字符串并赋值给新串，使用 fmt.Sprintf
    // %s 表示字符串
    var stockcode="000987"
    var enddate="2020-12-31"
    var url="Code=%s&endDate=%s"
    var target_url=fmt.Sprintf(url,stockcode,enddate)
    fmt.Println(target_url)

    // 另外一个实例，%d 表示整型
    const name, age = "Kim", 22
    s := fmt.Sprintf("%s is %d years old.\n", name, age)
    io.WriteString(os.Stdout, s) // 简单起见，忽略一些错误

    fmt.Println("猜数游戏开始")
    var num =rand.Intn(10)+1;
    fmt.Println(num)

    third :=1.0/3
    fmt.Println(third)
    fmt.Println("%v\n",third)

    fmt.Printf("%v\n", third)
    fmt.Printf("%f\n", third)
    fmt.Printf("%.3f\n", third)
    fmt.Printf("%4.2f\n", third)

    fmt.Printf("%T",third)

    println("In main before calling greeting")
    greeting()
    println("In main after calling greeting")
}

func greeting() {
    println("In greeting: Hi!!!!!")
}