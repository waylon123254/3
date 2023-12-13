package com.example.crudserver;

    import com.example.crudserver.dao.StudentMapper;
    import com.example.crudserver.entity.Student;
    import org.junit.jupiter.api.Test;
    import org.springframework.boot.test.context.SpringBootTest;

    import javax.annotation.Resource;
    import java.util.Date;

    @SpringBootTest
    class CrudServerApplicationTests {
        @Resource
        private StudentMapper studentMapper;

        @Test
        void contextLoads() {
            Student student = new Student(null, "小明", new Date(), "计算机", "计算机科学");
            studentMapper.insert(student);
        }

    }
