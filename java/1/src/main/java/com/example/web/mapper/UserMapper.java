package com.example.web.mapper;
// UserMapper.java

import com.example.web.pojo.User;
import org.apache.ibatis.annotations.*;
import java.util.List;

@Mapper
public interface UserMapper {
    @Select("SELECT * FROM user")
    List<User> selectAllUsers();

    @Select("SELECT * FROM user WHERE id = #{id}")
    User selectUserById(Long id);

    @Insert("INSERT INTO user (id, name, age, sex, address, phone, createTime) " +
            "VALUES (#{id}, #{name}, #{age}, #{sex}, #{address}, #{phone}, #{createTime})")
    void insertUser(User user);

    @Update("UPDATE user SET name = #{name}, age = #{age}, sex = #{sex}, address = #{address}, " +
            "phone = #{phone}, createTime = #{createTime} WHERE id = #{id}")
    void updateUser(User user);

    @Delete("DELETE FROM user WHERE id = #{id}")
    void deleteUser(Long id);
    User findByUsername(String username);
    void save(User user);
}