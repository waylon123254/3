package com.example.springbooot.mapper;

import com.example.springbooot.entity.User;
import org.apache.ibatis.annotations.*;

import java.util.List;

@Mapper
public interface UserMapper {
    @Insert("INSERT INTO user(username, password, name, phone, email, address, avatar) " +
            "VALUES(#{username}, #{password}, #{name}, #{phone}, #{email}, #{address}, #{avatar})")
    void insert(User user);

    @Update("UPDATE user SET name = #{name}, password = #{password}, phone = #{phone}, email = #{email}, address = #{address}, avatar = #{avatar} WHERE id = #{id}")
    void update(User user);

    @Delete("DELETE FROM user WHERE id = #{id}")
    void deleteUser(Integer id);

    @Delete("DELETE FROM user WHERE id IN :ids")
    void batchDeleteUser(@Param("ids") List<Integer> ids);

    @Select("SELECT * FROM user ORDER BY id DESC")
    List<User> select();

    @Select("SELECT * FROM user WHERE id = #{id} ORDER BY id DESC")
    User selectById(Integer id);

    @Select("SELECT * FROM user WHERE name = #{name} ORDER BY id DESC")
    List<User> selectByName(String name);

    @Select("SELECT * FROM user WHERE username = #{username} AND name = #{name} ORDER BY id DESC")
    List<User> selectByMore(@Param("username") String username, @Param("name") String name);

    @Select("SELECT * FROM user WHERE username LIKE CONCAT('%', #{username}, '%') AND name LIKE CONCAT('%', #{name}, '%') ORDER BY id DESC")
    List<User> selectByMo(@Param("username") String username, @Param("name") String name);

//    @Select("SELECT * FROM user WHERE username LIKE CONCAT('%',#{username},'%') AND name LIKE CONCAT('%',#{name},'%') ORDER BY id LIMIT #{skipNum}, #{pageSize}")
//    List<User> selectByPage(@Param("skipNum") Integer skipNum, @Param("pageSize") Integer pageSize, @Param("username") String username, @Param("name") String name);
//}
//@Select("SELECT COUNT(*) FROM user WHERE username LIKE CONCAT('%',#{username},'%') AND name LIKE CONCAT('%',#{name},'%')")
//Integer selectByPage(@Param("username") String username, @Param("name") String name);

    @Select("SELECT COUNT(id) FROM `user` WHERE username LIKE CONCAT('%',#{username},'%') AND name LIKE CONCAT('%',#{name},'%')")
    Integer selectCountByPage(@Param("username") String username, @Param("name") String name);
    @Select("select * from `user` where username like concat('%', #{username}, '%') and name like concat('%', #{name}, '%') order by id desc limit #{skipNum}, #{pagesize}")
    List<User> selectByPage(@Param("skipNum") Integer skipNum, @Param("pagesize") Integer pagesize, @Param("username") String username, @Param("name") String name);
}
