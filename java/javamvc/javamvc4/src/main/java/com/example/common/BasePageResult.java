package com.example.common;

import com.baomidou.mybatisplus.core.metadata.IPage;
import lombok.Data;

import java.util.List;
@Data
public class BasePageResult<T> {
    private List<T> data;
    private Long totalNum;
    public BasePageResult(List<T> data, Long totalNum) {
        this.data = data;
        this.totalNum = totalNum;
    }

    public static <E> BasePageResult<E> newInstance(IPage<E> page) {
        return new BasePageResult<E>(page.getRecords(), page.getTotal());
    }



    @Override
    public String toString() {
        return "BasePageResult{" +
                "data=" + data +
                ", totalNum=" + totalNum +
                '}';
    }
}
