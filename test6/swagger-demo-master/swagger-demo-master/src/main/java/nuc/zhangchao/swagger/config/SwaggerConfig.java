package nuc.zhangchao.swagger.config;

import org.springframework.beans.factory.annotation.Configurable;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.core.env.Environment;
import org.springframework.core.env.Profiles;
import springfox.documentation.builders.PathSelectors;
import springfox.documentation.builders.RequestHandlerSelectors;
import springfox.documentation.service.ApiInfo;
import springfox.documentation.service.Contact;
import springfox.documentation.spi.DocumentationType;
import springfox.documentation.spring.web.plugins.Docket;
import springfox.documentation.swagger2.annotations.EnableSwagger2;

import java.util.ArrayList;

/**
 * @Author Zhang Chao
 * @Date 2020/12/21 11:08
 * @Version 1.0
 */

@Configuration //指明是配置类
@EnableSwagger2 //开启Swagger2
public class SwaggerConfig {

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



    //配置了Swagger 的Docket的bean实例
    //Environment 获取环境  是springforwork包下的
    @Bean
    public Docket docket(Environment environment){

        //【设置要显示的swagger环境下】
        //core包下的  (可以是数组   指定需要的环境状态)
        Profiles profiles = Profiles.of("dev","test");
        //通过environment.acceptsProfiles判断是否处在自己设定的环境当中（用flag监听一下）
        boolean flag = environment.acceptsProfiles(profiles);


        return new Docket(DocumentationType.SWAGGER_2)
                .apiInfo(apiInfo())
                .groupName("吕宏博")  //分组 :因为一个文档可能不是一个人写的
                .enable(flag)//是否启用Swagger,如果为False,则Swagger 不能再浏览器中访问
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

    //配置swagger信息 = apiInfo
    private ApiInfo apiInfo(){
        //作者信息
        Contact contact = new Contact("吕宏博","https://mvnrepository.com/search?q=springfox-swagger","1292101943@qq.com");

        return new ApiInfo(
                "吕宏博的SwaggerAPI文档",
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
