package com.example.crudserver.controller.Dto;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

@Data
@AllArgsConstructor
@NoArgsConstructor
public class RequestParam {
    public Integer pageNum;
    public Integer pageSize ; // 修改pageSize的默认值为10
    public String keyWord;


}
