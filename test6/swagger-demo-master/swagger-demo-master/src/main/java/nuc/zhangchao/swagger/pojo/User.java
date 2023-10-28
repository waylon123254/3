package nuc.zhangchao.swagger.pojo;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;

/**
 * @Author Zhang Chao
 * @Date 2020/12/21 16:23
 * @Version 1.0
 */
//@Api(注释)
//文档注释
@ApiModel("用户实体类")
public class User {

    @ApiModelProperty("用户名")
    public String username;
    @ApiModelProperty("密码")
    public String password;
}
