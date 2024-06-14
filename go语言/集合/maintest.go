package main

import "fmt"

func someFunction() error {
  // 模拟函数返回错误
  return fmt.Errorf("发生了一些错误")
}


func main() {
    fmt.Println("整形")
    var a int = 42
    var b int8 = 10
    var c uint = 20
    
    fmt.Println(a)   // 输出：42
    fmt.Println(b)   // 输出：10
    fmt.Println(c)   // 输出：20

    fmt.Println("-------")
    fmt.Println("浮点型")
    var x float32 = 3.14
    var y float64 = 6.283
    
    fmt.Println(x)   // 输出：3.14
    fmt.Println(y)   // 输出：6.283
    fmt.Println("-----")
    fmt.Println("布尔型")

    var isTrue bool = true
    var isFalse bool = false
    
    fmt.Println(isTrue)    // 输出：true
    fmt.Println(isFalse)   // 输出：false

    fmt.Println("-----")
    fmt.Println("字符串类型")
    var str1 string = "Hello, "
    var str2 string = "World!"
    
    fmt.Println(str1 + str2)   // 输出：Hello, World!

    var r rune = '中'
    fmt.Printf("Unicode 码点：%d\n", r)

    // 在主函数中调用 someFunction，并处理返回的错误
    err := someFunction()
    if err != nil {
      fmt.Println("发生错误：", err.Error())
    }

    fmt.Println("-------")
    var siteMap map[string]string /*创建集合 */
    siteMap = make(map[string]string)

    /* map 插入 key - value 对,各个国家对应的首都 */
    siteMap [ "Google" ] = "谷歌"
    siteMap [ "Runoob" ] = "菜鸟教程"
    siteMap [ "Baidu" ] = "百度"
    siteMap [ "Wiki" ] = "维基百科"

    /*使用键输出地图值 */
    for site := range siteMap {
        fmt.Println(site, "首都是", siteMap [site])
    }

    /*查看元素在集合中是否存在 */
    name, ok := siteMap [ "Facebook" ] /*如果确定是真实的,则存在,否则不存在 */
    /*fmt.Println(capital) */
    /*fmt.Println(ok) */
    if (ok) {
        fmt.Println("Facebook 的 站点是", name)
    } else {
        fmt.Println("Facebook 站点不存在")
    }
    fmt.Println("************************")
    fmt.Println("集合--map")

    // 使用字面量创建 Map
    m := map[string]int{
    "apple": 1,
    "banana": 2,
    "orange": 3,
    }

    // 获取键值对
    v1 := m["apple"]
    v2, ok := m["pear"]  // 如果键不存在，ok 的值为 false，v2 的值为该类型的零值
    fmt.Println(v1)
    fmt.Println(v2)

    for k, v := range m {
    fmt.Printf("key=%s, value=%d\n", k, v)
}
    fmt.Println("*****删除操作****")
    /* 创建map */
    countryCapitalMap: = map[string] string {
    "France": "Paris",
    "Italy": "Rome",
    "Japan": "Tokyo",
    "India": "New delhi"
    }

    fmt.Println("原始地图")

    /* 打印地图 */
  for country: = range countryCapitalMap {
    fmt.Println(country, "首都是", countryCapitalMap[country])
    }

    /*删除元素*/
    delete(countryCapitalMap, "France")
    fmt.Println("法国条目被删除")

    fmt.Println("删除元素后地图")

    /*打印地图*/
    for country: = range countryCapitalMap {
    fmt.Println(country, "首都是", countryCapitalMap[country])
    }
}

