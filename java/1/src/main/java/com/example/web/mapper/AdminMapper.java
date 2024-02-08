package com.example.web.mapper;

import com.example.web.entity.Admin;
import org.apache.ibatis.annotations.Insert;
import org.apache.ibatis.annotations.Mapper;
import org.apache.ibatis.annotations.Select;

@Mapper
public interface AdminMapper {
//    Admin findByUsername(String username);
//    void save(Admin admin);
    @Select("SELECT * FROM admin WHERE username = #{username}")
    Admin findByUsername(String username);

    @Insert("INSERT INTO admin (username, password) VALUES (#{username}, #{password})")
    void save(Admin admin);
}