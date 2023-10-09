package dao;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.jdbc.core.JdbcTemplate;
import org.springframework.stereotype.Repository;
@Repository
public class UserDao {
    @Autowired
    private JdbcTemplate jdbcTemplate;

    public void addUser(Integer id,String name,Integer age) {
        String sql = "INSERT INTO 1 (id,name, age) VALUES(?, ?, ?);";
        jdbcTemplate.update(sql, id, name, age);
        System.out.println("添加数据成功!.......");
    }
}
