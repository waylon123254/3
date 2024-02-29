package com.example.service;
/*
这段代码定义了一个名为 UserService 的服务类，用于处理用户相关的业务逻辑。它包含了一些基本的 CRUD（创建、读取、更新、删除）操作方法以及一个分页查询方法。

具体功能如下：

add 方法：用于添加用户。它接收一个 User 对象作为参数，并将其保存到数据库中。
del 方法：用于删除用户。它接收一个 id 参数，根据该 id 删除对应的用户。
findById 方法：用于根据用户的 id 查询用户。它接收一个 id 参数，返回对应的用户对象或者 null（如果用户不存在）。
findPage 方法：用于分页查询用户列表。它接收一个 pageNum 参数表示页码，一个 pageSize 参数表示每页数量，还有一个 name 参数表示用户名关键字。该方法通过使用 Spring Data JPA 提供的分页查询功能，根据页码、每页数量和排序规则，返回符合条件的用户分页数据。
通过定义 UserService 类，你可以在应用程序中进行用户管理相关的业务操作，例如添加、删除、查询和分页查询用户信息。

请注意，这段代码只提供了服务类的定义，需要确保在合适的地方进行依赖注入（可以使用 @Autowired 注解）以及配置正确的数据库连接和实体类映射关系。
 */
import com.example.data.UserRepository;
import com.example.entity.User;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.PageRequest;
import org.springframework.data.domain.Pageable;
import org.springframework.data.domain.Sort;
import org.springframework.stereotype.Service;

import javax.annotation.Resource;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.List;

@Service
public class UserService {
    @Resource
    private UserRepository userRepository;

    public void save(User user) {
        String now = new SimpleDateFormat("yyyy-MM-dd").format(new Date());
        user.setCreateTime(now);
        userRepository.save(user);
    }

    public void delete(Long id) {
        userRepository.deleteById(id);
    }

    public User findById(Long id) {
        return userRepository.findById(id).orElse(null);
    }

    public List<User> findAll() {
        return userRepository.findAll();
    }

    public Page<User> findPage(Integer pageNum, Integer pageSize, String name) {
        // 构建分页查询条件
        Sort sort = Sort.by(Sort.Direction.DESC, "create_time");
        Pageable pageRequest = PageRequest.of(pageNum - 1, pageSize, sort);
        return userRepository.findByNameLike(name, pageRequest);
    }
}
