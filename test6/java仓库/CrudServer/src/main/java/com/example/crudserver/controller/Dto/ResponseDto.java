package com.example.crudserver.controller.Dto;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

@Data
@AllArgsConstructor
@NoArgsConstructor
public class ResponseDto <T>{
    private Boolean success;
    private String message;
T data;
}
