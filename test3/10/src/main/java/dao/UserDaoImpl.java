package dao;


import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.jdbc.core.JdbcTemplate;
import org.springframework.stereotype.Repository;
import pojo.User;


@Repository
public class UserDaoImpl implements UserDao{
    @Autowired
    private JdbcTemplate jdbcTemplate;
    //添加的方法
    @Override
    public void add(User user) {
        //  1、创建sql语句
        String sql = "insert into sss values(?,?,?)";
        //  2、调用方法实现
        Object[] args = {user.getId(), user.getName(), user.getAge()};
        int update = jdbcTemplate.update(sql, args);
        System.out.println(update);
    }
}
