package com.example.crudserver.dao;

import com.baomidou.mybatisplus.core.mapper.BaseMapper;
import com.example.crudserver.entity.Student;
import org.apache.ibatis.annotations.Mapper;
import org.springframework.stereotype.Repository;

@Repository
@Mapper
public interface StudentMapper extends BaseMapper<Student> {
}
