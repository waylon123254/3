package main

import (
	"fmt"
	"unicode/utf8"
)

func main(){
	// 声明字符串,以下三种方式为等价的
	peace := "peace"
	// var peace = "peace"
	// ver peace string = "peace"
	fmt.Println(peace)
	var blank string  // 字符串的零值
	fmt.Println(blank) // 空字符串

	// 字符串字面值与原始字符串字面值
		// 1.字符串字面值可以包括转义字符，如\n
		// 2.但是，如果你确实想得到\n而不是换行的话，可以使用`来代替"，这叫做原始字符串字面值。
	fmt.Println("peace be upon you\nupon you be peace")
	fmt.Println(`strings can span multiple lines with the \n escape sequence`)

	// 字符、code points、runes、bytes
		// 1. Unicode联盟为超过100万个字符分配了相应的数值，这个数叫做code point。例如：65代表A，12815代表"笑脸"这个字符。
		// 2. 为了表示这样的unicode code point，go语言提供了rune这个类型，它是int32的一个类型别名。
		// 3. byte是uint8类型的别名，目的是用于二进制数据。

	// 类型别名：同一个类型的另一个名字。因此，rune和int32是可以互换使用。

	// 也可以自定义类型别名
	type byte = uint8
	type rune = int32

	// 打印
		// 1.如果想打印字符而不是数值，使用%c格式化动词
	var pi rune = 960
	var alpha rune = 940
	var dana rune = 969
	var bang byte = 33
	// 将会打印出code point的值
	fmt.Printf("%v %v %v %v\n", pi, alpha, dana, bang)

	// 将会打印字符
	fmt.Printf("%c%c%c%c\n", pi, alpha, dana, bang)

	// 任何整数类型都可以使用%c打印，但rune意味着该数值表示一个字符。

	// 字符
		// 1.字符字面值使用''括起来
		// 2.如果没有指定字符类型的话，go会自动推断它的类型为rune
	grade := 'A'  // var grade rune
	fmt.Println(grade)
	var grade1 rune = 'A'
	fmt.Println(grade1)

	// 上面的grade仍然包含一个数值，上例中就是65，它是A的code point

	// 字符字面值也可以用byte类型
	var star byte = '*'
	fmt.Println(star)


	// string
		// 1.可以给某个变量赋予不同的string值，但string本身是不可变的
	message := "hello"
	c := message[1]
	fmt.Printf("%c\n", c)
	// message[1] = 'd'

	// go中的内置函数----len()：按字节长度输出

	// go中的字符串是用utf-8编码的，utf-8是unicode code point的几种编码之一。

	// utf-8是一种有效率的可变长度的编码，每个code point可以是8位/16位/32位

	// len()如何支持西班牙语、俄语、汉语等？
		// 使用utf-8包，它提供可以按rune计算字符串长度的方法
		// DecodeRunelnString函数会返回第一个字符，以及字符所占的字节数

		// go语言中的函数可以返回多个值
	
	question := "анве αδγεσρ"
	fmt.Println(len(question), "bytes")

	fmt.Println(utf8.RuneCountInString(question), "runes")

	c1, size := utf8.DecodeRuneInString(question)
	fmt.Printf("First rune: %c %v bytes", c1, size)

	// range:可以遍历各种集合
	for _, cc := range question {
		fmt.Printf("%c\n", cc)
	}
}