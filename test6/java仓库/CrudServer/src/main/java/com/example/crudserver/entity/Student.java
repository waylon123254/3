package com.example.crudserver.entity;

import com.baomidou.mybatisplus.annotation.IdType;
import com.baomidou.mybatisplus.annotation.TableId;
import com.baomidou.mybatisplus.annotation.TableLogic;
import com.baomidou.mybatisplus.annotation.TableName;
import com.fasterxml.jackson.annotation.JsonFormat;
import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

import java.util.Date;
@Data
@AllArgsConstructor
@NoArgsConstructor
@TableName("student")
public class Student {
    @TableId(type = IdType.AUTO)
    private Long id;
    private String name;
    @JsonFormat(pattern = "yyyy--mm--dd")
    private Date birthday;
    private String college;
    private String major;
}
