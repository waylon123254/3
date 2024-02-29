package com.example.entity;
import javax.persistence.*;
/*
这段代码定义了一个名为 User 的实体类，代表了一个用户对象。该实体类映射到数据库中的 user 表。

该实体类具有以下属性：

id：作为主键，用来唯一标识用户。
name：表示用户的姓名。
age：表示用户的年龄。
sex：表示用户的性别。
address：表示用户的地址。
phone：表示用户的电话号码。
create_time：表示用户的创建时间。
通过使用 JPA 注解，如 @Entity、@Table、@Id 和 @Column，该实体类与数据库表进行了映射。其中，@Entity 注解表示该类是一个实体类，@Table 注解指定了对应的数据库表名，@Id 注解表示 id 字段是主键，@Column 注解指定了字段的属性名称。这些注解使得该实体类可以与数据库进行交互，实现数据的持久化操作。

通过定义 User 实体类，你可以在应用程序中创建、保存、更新和查询用户的数据，并将其持久化到数据库中。
 */
@Table(name="user")
@Entity
public class User {
    @Id
    private Long id;
    private String name;
    private Integer age;
    private String sex;
    private String address;
    private String phone;
    @Column(name = "create_time")
    private String createTime;

    public Long getId() {
        return id;
    }

    public void setId(Long id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public Integer getAge() {
        return age;
    }

    public void setAge(Integer age) {
        this.age = age;
    }

    public String getSex() {
        return sex;
    }

    public void setSex(String sex) {
        this.sex = sex;
    }

    public String getAddress() {
        return address;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public String getPhone() {
        return phone;
    }

    public void setPhone(String phone) {
        this.phone = phone;
    }

    public String getCreateTime() {
        return createTime;
    }

    public void setCreateTime(String createTime) {
        this.createTime = createTime;
    }
}
