/*
 Navicat Premium Data Transfer

 Source Server         : mysql
 Source Server Type    : MySQL
 Source Server Version : 80031 (8.0.31)
 Source Host           : localhost:3306
 Source Schema         : mytest1

 Target Server Type    : MySQL
 Target Server Version : 80031 (8.0.31)
 File Encoding         : 65001

 Date: 16/02/2024 17:33:39
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for role
-- ----------------------------
DROP TABLE IF EXISTS `role`;
CREATE TABLE `role`  (
  `id` int NOT NULL AUTO_INCREMENT COMMENT '角色ID',
  `name` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '角色名称',
  `description` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '角色描述',
  `flag` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '角色唯一标识',
  `create_time` datetime NULL DEFAULT NULL COMMENT '创建时间',
  `update_time` datetime NULL DEFAULT NULL COMMENT '更新时间',
  `is_deleted` tinyint NULL DEFAULT 0 COMMENT '是否已删除',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 17 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci COMMENT = '角色信息表' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of role
-- ----------------------------
INSERT INTO `role` VALUES (1, '超级管理员', '所有权限', 'root', '2020-01-01 00:00:00', NULL, 0);
INSERT INTO `role` VALUES (2, '普通管理员', '普通管理权限', 'admin', '2020-01-02 00:00:00', NULL, 0);
INSERT INTO `role` VALUES (3, '测试账户', '测试权限', 'test', '2020-01-01 00:00:00', NULL, 0);
INSERT INTO `role` VALUES (15, 'test', 'test', NULL, NULL, NULL, 0);
INSERT INTO `role` VALUES (16, 'tesr', 'test', 'test', NULL, NULL, 0);

-- ----------------------------
-- Table structure for sys_dict
-- ----------------------------
DROP TABLE IF EXISTS `sys_dict`;
CREATE TABLE `sys_dict`  (
  `id` int NOT NULL AUTO_INCREMENT,
  `name` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL COMMENT '名称',
  `value` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL COMMENT '值',
  `type` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL COMMENT '类型',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 281 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_unicode_ci ROW_FORMAT = DYNAMIC;

-- ----------------------------
-- Records of sys_dict
-- ----------------------------
INSERT INTO `sys_dict` VALUES (1, 'user', 'el-icon-user', 'icon');
INSERT INTO `sys_dict` VALUES (2, 'house', 'el-icon-house', 'icon');
INSERT INTO `sys_dict` VALUES (3, 'menu', 'el-icon-menu', 'icon');
INSERT INTO `sys_dict` VALUES (4, 's-custom', 'el-icon-s-custom', 'icon');
INSERT INTO `sys_dict` VALUES (5, 's-grid', 'el-icon-s-grid', 'icon');
INSERT INTO `sys_dict` VALUES (6, 'document', 'el-icon-document', 'icon');
INSERT INTO `sys_dict` VALUES (7, 'coffee', 'el-icon-coffee\r\n', 'icon');
INSERT INTO `sys_dict` VALUES (8, 's-marketing', 'el-icon-s-marketing', 'icon');
INSERT INTO `sys_dict` VALUES (9, 'phone-outline', 'el-icon-phone-outline', 'icon');
INSERT INTO `sys_dict` VALUES (10, 'platform-eleme', 'el-icon-platform-eleme', 'icon');
INSERT INTO `sys_dict` VALUES (11, 'eleme', 'el-icon-eleme', 'icon');
INSERT INTO `sys_dict` VALUES (12, 'delete-solid', 'el-icon-delete-solid', 'icon');
INSERT INTO `sys_dict` VALUES (13, 'delete', 'el-icon-delete', 'icon');
INSERT INTO `sys_dict` VALUES (14, 's-tools', 'el-icon-s-tools', 'icon');
INSERT INTO `sys_dict` VALUES (15, 'setting', 'el-icon-setting', 'icon');
INSERT INTO `sys_dict` VALUES (16, 'user-solid', 'el-icon-user-solid', 'icon');
INSERT INTO `sys_dict` VALUES (17, 'phone', 'el-icon-phone', 'icon');
INSERT INTO `sys_dict` VALUES (18, 'more', 'el-icon-more', 'icon');
INSERT INTO `sys_dict` VALUES (19, 'more-outline', 'el-icon-more-outline', 'icon');
INSERT INTO `sys_dict` VALUES (20, 'star-on', 'el-icon-star-on', 'icon');
INSERT INTO `sys_dict` VALUES (21, 'star-off', 'el-icon-star-off', 'icon');
INSERT INTO `sys_dict` VALUES (22, 's-goods', 'el-icon-s-goods', 'icon');
INSERT INTO `sys_dict` VALUES (23, 'goods', 'el-icon-goods', 'icon');
INSERT INTO `sys_dict` VALUES (24, 'warning', 'el-icon-warning', 'icon');
INSERT INTO `sys_dict` VALUES (25, 'warning-outline', 'el-icon-warning-outline', 'icon');
INSERT INTO `sys_dict` VALUES (26, 'question', 'el-icon-question', 'icon');
INSERT INTO `sys_dict` VALUES (27, 'info', 'el-icon-info', 'icon');
INSERT INTO `sys_dict` VALUES (28, 'remove', 'el-icon-remove', 'icon');
INSERT INTO `sys_dict` VALUES (29, 'circle-plus', 'el-icon-circle-plus', 'icon');
INSERT INTO `sys_dict` VALUES (30, 'success', 'el-icon-success', 'icon');
INSERT INTO `sys_dict` VALUES (31, 'error', 'el-icon-error', 'icon');
INSERT INTO `sys_dict` VALUES (32, 'zoom-in', 'el-icon-zoom-in', 'icon');
INSERT INTO `sys_dict` VALUES (33, 'zoom-out', 'el-icon-zoom-out', 'icon');
INSERT INTO `sys_dict` VALUES (34, 'remove-outline', 'el-icon-remove-outline', 'icon');
INSERT INTO `sys_dict` VALUES (35, 'circle-plus-outline', 'el-icon-circle-plus-outline', 'icon');
INSERT INTO `sys_dict` VALUES (36, 'circle-check', 'el-icon-circle-check', 'icon');
INSERT INTO `sys_dict` VALUES (37, 'circle-close', 'el-icon-circle-close', 'icon');
INSERT INTO `sys_dict` VALUES (38, 's-help', 'el-icon-s-help', 'icon');
INSERT INTO `sys_dict` VALUES (39, 'help', 'el-icon-help', 'icon');
INSERT INTO `sys_dict` VALUES (40, 'minus', 'el-icon-minus', 'icon');
INSERT INTO `sys_dict` VALUES (41, 'plus', 'el-icon-plus', 'icon');
INSERT INTO `sys_dict` VALUES (42, 'check', 'el-icon-check', 'icon');
INSERT INTO `sys_dict` VALUES (43, 'close', 'el-icon-close', 'icon');
INSERT INTO `sys_dict` VALUES (44, 'picture', 'el-icon-picture', 'icon');
INSERT INTO `sys_dict` VALUES (45, 'picture-outline', 'el-icon-picture-outline', 'icon');
INSERT INTO `sys_dict` VALUES (46, 'picture-outline-round', 'el-icon-picture-outline-round', 'icon');
INSERT INTO `sys_dict` VALUES (47, 'upload', 'el-icon-upload', 'icon');
INSERT INTO `sys_dict` VALUES (48, 'upload2', 'el-icon-upload2', 'icon');
INSERT INTO `sys_dict` VALUES (49, 'download', 'el-icon-download', 'icon');
INSERT INTO `sys_dict` VALUES (50, 'camera-solid', 'el-icon-camera-solid', 'icon');

-- ----------------------------
-- Table structure for sys_file
-- ----------------------------
DROP TABLE IF EXISTS `sys_file`;
CREATE TABLE `sys_file`  (
  `id` int NOT NULL AUTO_INCREMENT COMMENT 'id',
  `name` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL COMMENT '文件名',
  `type` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL COMMENT '文件类型',
  `size` bigint NULL DEFAULT NULL COMMENT '文件大小',
  `url` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL COMMENT '文件URL',
  `is_delete` tinyint(1) NULL DEFAULT 0 COMMENT '是否删除',
  `enable` tinyint(1) NULL DEFAULT 1 COMMENT '是否禁用',
  `md5` varchar(32) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL COMMENT '文件MD5值',
  PRIMARY KEY (`id`) USING BTREE,
  UNIQUE INDEX `un_md5`(`md5` ASC) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 10 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_unicode_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of sys_file
-- ----------------------------
INSERT INTO `sys_file` VALUES (1, '1.c', 'c', 2490, 'http://localhost:9090/file/a4d8b6567bc54451a985086865cc5dd3.c', 0, 1, NULL);
INSERT INTO `sys_file` VALUES (2, '1.c', 'c', 2, 'http://localhost:9090/file/978d7a4d144b497b866e93bbafaa50e8.c', 0, 1, NULL);
INSERT INTO `sys_file` VALUES (3, '1.c', 'c', 2, 'http://localhost:9090/file/9fe02a2a60754d3ea13469438dee0ec7.c', 0, 1, 'eb34606929f40d05c137ec501e906d78');
INSERT INTO `sys_file` VALUES (4, '2.c', 'c', 0, 'http://localhost:9090/file/defc3505f61b4b80901acfa2b5f5b9df.c', 1, 1, 'd2ac4ff7415d8cc5ccef47e97abc1c1e');
INSERT INTO `sys_file` VALUES (5, '微博 – 随时随地发现新鲜事 - image (2).jpeg', 'jpeg', 369, 'http://localhost:9090/file/531058f5d04c4366bef721a3a7bea6b0.jpeg', 0, 1, 'c7bf16e9e8e68a54eab92d406d1fe6de');
INSERT INTO `sys_file` VALUES (6, '微博 – 随时随地发现新鲜事 - image (19).jpeg', 'jpeg', 143, 'http://localhost:9090/file/6eb2b1ff687640d3805b8864581c8c17.jpeg', 0, 1, '21bc8356241aae4e5330642db3f02887');
INSERT INTO `sys_file` VALUES (7, '-1e2997f79f13e822.jpg', 'jpg', 87, 'http://localhost:9090/file/cb43f8c8e4e949a899b402f9617715a7.jpg', 0, 1, 'ff60b8217b13d0e8589d04d4100be3e9');
INSERT INTO `sys_file` VALUES (8, '006anXukgy1hi20bdajicj31f42061kx.png', 'png', 3947, 'http://localhost:9090/file/ba1725d03e97460fa0609c7b453b2317.png', 0, 1, 'd6632c6fd9cc6da38354c3eb07f46559');
INSERT INTO `sys_file` VALUES (9, 'F5Ly8yDakAAqkFo.jpg', 'jpg', 35, 'http://localhost:9090/file/299fc3d7408a4ba7ac7f656cce587354.jpg', 0, 0, '37d01e1a96bb4d6e61583163c25446b9');

-- ----------------------------
-- Table structure for sys_log
-- ----------------------------
DROP TABLE IF EXISTS `sys_log`;
CREATE TABLE `sys_log`  (
  `id` int NOT NULL AUTO_INCREMENT,
  `username` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NULL DEFAULT NULL COMMENT '操作人',
  `record` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NULL DEFAULT NULL COMMENT '操作记录',
  `type` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NULL DEFAULT NULL COMMENT '操作类型',
  `create_time` timestamp NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 277 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_general_ci ROW_FORMAT = DYNAMIC;

-- ----------------------------
-- Records of sys_log
-- ----------------------------

-- ----------------------------
-- Table structure for sys_menu
-- ----------------------------
DROP TABLE IF EXISTS `sys_menu`;
CREATE TABLE `sys_menu`  (
  `id` int NOT NULL AUTO_INCREMENT COMMENT 'id',
  `name` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL COMMENT '名称',
  `path` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL COMMENT '路径',
  `icon` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL COMMENT '图标',
  `description` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL COMMENT '描述',
  `pid` int NULL DEFAULT NULL COMMENT '父级id',
  `page_path` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL COMMENT '页面路径',
  `sort_num` int NULL DEFAULT NULL COMMENT '排序',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 10 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_unicode_ci COMMENT = '系统菜单表' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of sys_menu
-- ----------------------------
INSERT INTO `sys_menu` VALUES (1, '系统管理', '', NULL, NULL, NULL, NULL, 1);
INSERT INTO `sys_menu` VALUES (2, '用户', '/user', 'el-icon-user', '用户', 1, 'user', NULL);
INSERT INTO `sys_menu` VALUES (3, '菜单', '/menu', 'el-icon-menu', NULL, 1, NULL, NULL);
INSERT INTO `sys_menu` VALUES (4, '主页', '/home', 'el-icon-home', NULL, 1, NULL, NULL);
INSERT INTO `sys_menu` VALUES (5, '文件', '/flie', 'el-icon-document', NULL, 1, NULL, NULL);
INSERT INTO `sys_menu` VALUES (6, '角色', '/role', 'el-icon-user-solid', NULL, 1, NULL, NULL);
INSERT INTO `sys_menu` VALUES (7, '日志', '/log', 'el-icon-document', NULL, 1, NULL, NULL);
INSERT INTO `sys_menu` VALUES (8, '文章管理', '/', 'add-o', NULL, 1, NULL, NULL);
INSERT INTO `sys_menu` VALUES (9, 'test', NULL, NULL, 'test', 1, NULL, NULL);

-- ----------------------------
-- Table structure for sys_role_menu
-- ----------------------------
DROP TABLE IF EXISTS `sys_role_menu`;
CREATE TABLE `sys_role_menu`  (
  `role_id` int NOT NULL COMMENT '角色id',
  `menu_id` int NOT NULL COMMENT '菜单id',
  PRIMARY KEY (`role_id`, `menu_id`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci COMMENT = '角色菜单关系表' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of sys_role_menu
-- ----------------------------
INSERT INTO `sys_role_menu` VALUES (1, 1);
INSERT INTO `sys_role_menu` VALUES (1, 2);
INSERT INTO `sys_role_menu` VALUES (1, 3);
INSERT INTO `sys_role_menu` VALUES (1, 4);
INSERT INTO `sys_role_menu` VALUES (1, 5);
INSERT INTO `sys_role_menu` VALUES (2, 1);
INSERT INTO `sys_role_menu` VALUES (2, 2);
INSERT INTO `sys_role_menu` VALUES (2, 3);
INSERT INTO `sys_role_menu` VALUES (2, 4);
INSERT INTO `sys_role_menu` VALUES (2, 5);

-- ----------------------------
-- Table structure for sys_user_role
-- ----------------------------
DROP TABLE IF EXISTS `sys_user_role`;
CREATE TABLE `sys_user_role`  (
  `id` int NOT NULL AUTO_INCREMENT,
  `user_id` int NOT NULL,
  `role_id` int NOT NULL,
  PRIMARY KEY (`id`) USING BTREE,
  INDEX `fk_user_role_user_id`(`user_id` ASC) USING BTREE,
  INDEX `fk_user_role_role_id`(`role_id` ASC) USING BTREE,
  CONSTRAINT `fk_user_role_role_id` FOREIGN KEY (`role_id`) REFERENCES `role` (`id`) ON DELETE RESTRICT ON UPDATE RESTRICT,
  CONSTRAINT `fk_user_role_user_id` FOREIGN KEY (`user_id`) REFERENCES `user1` (`id`) ON DELETE RESTRICT ON UPDATE RESTRICT
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_unicode_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of sys_user_role
-- ----------------------------

-- ----------------------------
-- Table structure for user
-- ----------------------------
DROP TABLE IF EXISTS `user`;
CREATE TABLE `user`  (
  `id` int NOT NULL AUTO_INCREMENT,
  `username` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL,
  `password` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL,
  `name` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL,
  `phone` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL,
  `email` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL,
  `address` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL,
  `avatar` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL,
  `nickname` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL,
  PRIMARY KEY (`id`) USING BTREE,
  UNIQUE INDEX `username`(`username` ASC) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 20 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_unicode_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of user
-- ----------------------------
INSERT INTO `user` VALUES (1, '张三', 'pass123', '张三', '13811111111', 'zhangsan@example.com', '北京市海淀区', 'avatar1.jpg', NULL);
INSERT INTO `user` VALUES (2, 'john2', '1234562', '李四', '12345678902', 'john2@example.com', '123 Main St', 'avatar2.jpg', 'John Doe2');
INSERT INTO `user` VALUES (3, '王五', 'pass789', '王五', '15633333333', 'wangwu@example.com', '广州市天河区', 'avatar3.jpg', NULL);
INSERT INTO `user` VALUES (4, '赵六', 'pass666', '赵六', '15744444444', 'zhaoliu@example.com', '深圳市南山区', 'avatar4.jpg', NULL);
INSERT INTO `user` VALUES (5, '钱七', 'pass888', '钱七', '13055555555', 'qianqi@example.com', '重庆市渝北区', 'avatar5.jpg', NULL);
INSERT INTO `user` VALUES (6, '周八', 'pass999', '周八', '13166666666', 'zhouba@example.com', '成都市高新区', 'avatar6.jpg', NULL);
INSERT INTO `user` VALUES (7, '孙九', 'pass000', '孙九', '13277777777', 'sunjiu@example.com', '西安市雁塔区', 'avatar7.jpg', NULL);
INSERT INTO `user` VALUES (8, '吴十', 'pass1010', '吴十', '13488888888', 'wushi@example.com', '武汉市洪山区', 'avatar8.jpg', NULL);
INSERT INTO `user` VALUES (9, '郑一', 'pass1111', '郑一', '13599999999', 'zhengyi@example.com', '南京市鼓楼区', 'avatar9.jpg', NULL);
INSERT INTO `user` VALUES (10, '黄二', 'pass2222', '黄二', '13700000000', 'huanger@example.com', '杭州市西湖区', 'avatar10.jpg', NULL);
INSERT INTO `user` VALUES (11, 'li', 'abc', '李四', '9876543210', 'li@example.com', '上海', 'avatar.jpg', NULL);
INSERT INTO `user` VALUES (12, 'ming', 'xyz', '王五', '1357924680', 'ming@example.com', '广州', 'avatar.jpg', NULL);
INSERT INTO `user` VALUES (13, 'ming1', 'xyz2', '王五', '1357924680', 'ming@example.com', '广州', 'avatar.jpg', NULL);
INSERT INTO `user` VALUES (14, 'user1', 'password1', 'John Doe', '1234567890', 'john.doe@example.com', '123 Main St', 'avatar1.jpg', NULL);
INSERT INTO `user` VALUES (17, 'john_doe', 'secretpassword', NULL, '1234567890', 'john@example.com', '123 Main Street', NULL, 'John');
INSERT INTO `user` VALUES (18, 'john', '123456', NULL, '1234567890', 'john@example.com', '123 Main St', NULL, 'John Doe');
INSERT INTO `user` VALUES (19, 'jane', 'abcdef', NULL, '9876543210', 'jane@example.com', '456 Oak Ave', NULL, 'Jane Smith');

-- ----------------------------
-- Table structure for user1
-- ----------------------------
DROP TABLE IF EXISTS `user1`;
CREATE TABLE `user1`  (
  `id` int NOT NULL AUTO_INCREMENT COMMENT 'id',
  `username` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL COMMENT '用户名',
  `password` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL COMMENT '密码',
  `phone` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL COMMENT '电话',
  `email` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL COMMENT '邮箱',
  `address` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL COMMENT '地址',
  `nickname` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL COMMENT '昵称',
  `avatar` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL COMMENT '头像',
  `createTime` timestamp NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  `role` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL COMMENT '角色',
  `role_id` int NULL DEFAULT NULL COMMENT '角色id',
  PRIMARY KEY (`id`) USING BTREE,
  UNIQUE INDEX `username`(`username` ASC) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 52 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_unicode_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of user1
-- ----------------------------
INSERT INTO `user1` VALUES (7, 'JohnDoe', 'password12', '12345678901', 'john@example.com', '123 Main St', 'John', 'https://img.zcool.cn/community/01a6095f110b9fa8012066219b67d4.png@1280w_1l_2o_100sh.png', '2023-01-04 10:02:37', 'admin', 1);
INSERT INTO `user1` VALUES (8, 'JaneSmith', 'password2', '0987654321', 'jane@example.com', '456 Oak Ave', 'Jane', 'avatar2.jpg', '2020-06-10 10:02:37', 'admin', NULL);
INSERT INTO `user1` VALUES (9, 'MikeJohnson', 'password3', '5558887777', 'mike@example.com', '789 Elm Blvd', 'Mike', 'avatar3.jpg', '2023-11-22 10:02:37', 'admin', 1);
INSERT INTO `user1` VALUES (10, 'SarahWilliams', 'password4', '2223334444', 'sarah@example.com', '321 Pine Dr', 'Sarah', 'avatar4.jpg', '2023-11-22 10:02:37', 'admin', NULL);
INSERT INTO `user1` VALUES (12, 'EmilyDavis', 'password6', '4445556666', 'emily@example.com', '987 Willow Ln', 'Emily', 'avatar6.jpg', '2023-11-22 10:02:37', 'admin', NULL);
INSERT INTO `user1` VALUES (13, '张三子', '123456', '1', '1', '1', '张三子', 'https://img.zcool.cn/community/01a6095f110b9fa8012066219b67d4.png@1280w_1l_2o_100sh.png', '2023-11-22 10:02:37', NULL, NULL);
INSERT INTO `user1` VALUES (14, '2345', '123456', NULL, NULL, '1', '1', NULL, '2023-11-22 10:02:37', NULL, 1);
INSERT INTO `user1` VALUES (32, '345', '534', '6', '65', '6', '786', '786', '2023-11-22 10:02:37', NULL, NULL);
INSERT INTO `user1` VALUES (33, '三种是', '123456', NULL, NULL, NULL, NULL, NULL, '2023-11-22 10:02:37', NULL, 1);
INSERT INTO `user1` VALUES (35, '氯化钡', '123415566', NULL, NULL, NULL, NULL, NULL, '2024-02-01 22:09:24', NULL, NULL);
INSERT INTO `user1` VALUES (36, '123456', '123456', NULL, NULL, NULL, NULL, NULL, '2024-02-01 22:09:44', NULL, NULL);
INSERT INTO `user1` VALUES (37, 'fesgvfdb', 'sdvdfnḃhg', NULL, NULL, NULL, NULL, NULL, '2024-02-01 22:11:44', NULL, NULL);
INSERT INTO `user1` VALUES (38, '56765w8765', '587u68768768678', NULL, NULL, NULL, NULL, NULL, '2024-02-01 22:14:28', NULL, NULL);
INSERT INTO `user1` VALUES (39, '45土壤太5天', 'retgyry6tyu65', NULL, NULL, NULL, NULL, NULL, '2024-02-01 22:15:40', NULL, NULL);
INSERT INTO `user1` VALUES (40, 'rewsgrted', 'ghedsrfthgfhjfr', NULL, NULL, NULL, NULL, NULL, '2024-02-01 22:16:10', NULL, NULL);
INSERT INTO `user1` VALUES (42, 'test', 'test', NULL, NULL, NULL, NULL, NULL, '2024-02-13 22:44:03', NULL, 2);
INSERT INTO `user1` VALUES (43, 'cfbc', NULL, NULL, 'gdfdgfd', NULL, 'sdfagfrda', NULL, '2024-02-13 22:46:25', NULL, NULL);
INSERT INTO `user1` VALUES (44, 'wqerfre', NULL, NULL, NULL, NULL, NULL, NULL, '2024-02-13 22:47:23', NULL, NULL);
INSERT INTO `user1` VALUES (45, 'erfgsegbv', NULL, NULL, NULL, NULL, NULL, NULL, '2024-02-13 22:50:35', NULL, NULL);
INSERT INTO `user1` VALUES (46, 'wefrgregt5rgh', NULL, NULL, NULL, NULL, NULL, NULL, '2024-02-13 22:50:54', NULL, NULL);
INSERT INTO `user1` VALUES (47, 'regrthtgrbgfdsh', NULL, NULL, NULL, NULL, NULL, NULL, '2024-02-13 22:51:05', NULL, NULL);
INSERT INTO `user1` VALUES (48, '43654y65', NULL, NULL, NULL, NULL, NULL, NULL, '2024-02-13 22:51:27', NULL, NULL);
INSERT INTO `user1` VALUES (49, 'et4wy5r3yht54qey5aT', NULL, NULL, NULL, NULL, NULL, NULL, '2024-02-13 22:52:56', NULL, NULL);
INSERT INTO `user1` VALUES (50, 'DSVFFB', NULL, NULL, NULL, NULL, NULL, NULL, '2024-02-13 22:53:51', NULL, NULL);
INSERT INTO `user1` VALUES (51, 'TRHNJYTJHYTJ', NULL, NULL, NULL, NULL, NULL, NULL, '2024-02-13 22:54:05', NULL, NULL);

SET FOREIGN_KEY_CHECKS = 1;
