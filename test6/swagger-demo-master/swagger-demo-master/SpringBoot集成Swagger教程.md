
##教程来源
##### 视频网址 https://www.bilibili.com/video/BV1Y441197Lw?p=4
##### 博客网址 https://mp.weixin.qq.com/s/0-c0MAgtyOeKx6qzmdUG0w
###集成swagger的步骤
1. 新建一个 springboot——web项目
2. 导入相关依赖
  ```maven
        查询的时候查（springfox-swagger）

        <!-- https://mvnrepository.com/artifact/io.springfox/springfox-swagger-ui -->
        <dependency>
            <groupId>io.springfox</groupId>
            <artifactId>springfox-swagger-ui</artifactId>
            <version>2.9.2</version>
        </dependency>

        <!-- https://mvnrepository.com/artifact/io.springfox/springfox-swagger2 -->
        <dependency>
            <groupId>io.springfox</groupId>
            <artifactId>springfox-swagger2</artifactId>
            <version>2.9.2</version>
        </dependency>
  ```
3.编写一个hello工程
   写一个control包下的类用于测试Springboot的项目是否配置完毕
   ```
        //因为没有视图  所以返回json字符串
        @RestController
        public class HelloController {
        
            @RequestMapping(value = "/hello")
            public String hello(){
                return "hello";
            }
        }
   ```
4.配置Swagger=====》Config
```
//因为没有视图  所以返回json字符串
@RestController
public class HelloController {

    @RequestMapping(value = "/hello")
    public String hello(){
        return "hello";
    }
}
```
5.测试
```
访问：localhost:8080/swagger-ui.html
```
   
### 配置Swagger 
Swagger 的bean 实例Docket;
```java

@Configuration //指明是配置类
@EnableSwagger2 //开启Swagger2
public class SwaggerConfig {


    //配置了Swagger 的Docket的bean实例
    @Bean
    public Docket docket(){
        return new Docket(DocumentationType.SWAGGER_2)
                .apiInfo(apiInfo());
    }

    //配置swagger信息 = apiInfo
    private ApiInfo apiInfo(){
        //作者信息
        Contact contact = new Contact("张超","https://mvnrepository.com/search?q=springfox-swagger","1292101943@qq.com");

        return new ApiInfo(
                "张超的SwaggerAPI文档",
                "努力学习吧，为自己的未来梦想而奔跑吧",
                "v1.0",
                "https://mvnrepository.com/search?q=springfox-swagger",
                contact,
                "Apache 2.0",
                "http://www.apache.org/licenses/LICENSE-2.0",
                new ArrayList()
        );
    }
}

```

### Swagger 配置扫描接口
配置了Swagger 的Docket的bean实例
```
    @Bean
    public Docket docket(){
        return new Docket(DocumentationType.SWAGGER_2)
                .apiInfo(apiInfo())
                .select()
                //RequestHandlerSelectors,配置要扫描接口的方式
                //basePackage:指定要扫描的包
                //any 扫描全部
                //none 不扫描
                //withClassAnnotation：扫描类上的注解
                    //例如:.apis(RequestHandlerSelectors.withClassAnnotation(RestController.class))
                //withMethodAnnotation：扫描方法上的注解
                    //例如:.apis(RequestHandlerSelectors.withMethodAnnotation(GetMapping.class))
                .apis(RequestHandlerSelectors.basePackage("nuc.zhangchao.swagger.controller"))
                //paths()过滤什么路径 Predicate   PathSelectors.regex()正则表达式   ant()路径
//                .paths(PathSelectors.ant("/zhangchao/**"))
                .build();
    }
```
 
 
### Swagger的禁用
情况：我们只希望我的Swagger在生产环境中使用，在发布的时候不使用？

在properties中写下
```
#激活哪个状态
spring.profiles.active=dev
```
在配置类中
```
  @Bean
    public Docket docket(Environment environment){

        //【设置要显示的swagger环境下】
        //core包下的  (可以是数组   指定需要的环境状态)
        Profiles profiles = Profiles.of("dev","test");
        //通过environment.acceptsProfiles判断是否处在自己设定的环境当中（用flag监听一下）
        boolean flag = environment.acceptsProfiles(profiles);


        return new Docket(DocumentationType.SWAGGER_2)
                .apiInfo(apiInfo())
                .enable(flag)//是否启用Swagger,如果为False,则Swagger 不能再浏览器中访问
                .select()
            ........(之后不变)
```

总结：

.enable(flag)//是否启用Swagger,如果为False,则Swagger 不能再浏览器中访问
```
spring.profiles.active=dev

Profiles profiles = Profiles.of("dev","test");
boolean flag = environment.acceptsProfiles(profiles);

.enable(flag)
```


### 配置API文档的分组
```
 .groupName("张超 ")  
```
##### 如何配置多个分组;多个Docket实例即可
```
    @Bean
    public Docket docket1(){
        return new Docket(DocumentationType.SWAGGER_2).groupName("A");
    }
    @Bean
    public Docket docket2(){
        return new Docket(DocumentationType.SWAGGER_2).groupName("B");
    }
    @Bean
    public Docket docket3(){
        return new Docket(DocumentationType.SWAGGER_2).groupName("C");
    }
```
##### 实体类配置
{补}：

### 总结
1. 随意加注释
2.接口文档实时更新
3.可以在线测试
Swagger 是一个优秀的工具   迭代开发
【注意点】 在正式发布的时候，关闭Swagger！！！ 安全  节省内存
### 注释总结