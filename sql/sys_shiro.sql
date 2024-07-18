/*
 Navicat Premium Data Transfer

 Source Server         : mysql
 Source Server Type    : MySQL
 Source Server Version : 80035 (8.0.35)
 Source Host           : localhost:3306
 Source Schema         : sys_shiro

 Target Server Type    : MySQL
 Target Server Version : 80035 (8.0.35)
 File Encoding         : 65001

 Date: 17/07/2024 22:07:20
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for sys_log
-- ----------------------------
DROP TABLE IF EXISTS `sys_log`;
CREATE TABLE `sys_log`  (
  `id` varchar(64) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '主键',
  `user_id` varchar(64) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '用户id',
  `username` varchar(50) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '用户名',
  `operation` varchar(50) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '用户操作',
  `time` int NULL DEFAULT NULL COMMENT '响应时间',
  `method` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '请求方法',
  `params` varchar(5000) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '请求参数',
  `ip` varchar(64) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT 'IP地址',
  `create_time` datetime NULL DEFAULT NULL COMMENT '创建时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '系统日志' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of sys_log
-- ----------------------------

-- ----------------------------
-- Table structure for sys_permission
-- ----------------------------
DROP TABLE IF EXISTS `sys_permission`;
CREATE TABLE `sys_permission`  (
  `id` varchar(64) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '主键',
  `code` varchar(64) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '菜单权限编码(前端按钮权限标识)',
  `title` varchar(300) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '菜单权限名称',
  `icon` varchar(60) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT '' COMMENT '菜单图标',
  `perms` varchar(500) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '授权(如：sys:user:add)',
  `url` varchar(100) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '访问地址URL',
  `method` varchar(10) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '资源请求类型',
  `name` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT '' COMMENT 'name与前端vue路由name约定一致',
  `pid` varchar(64) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT '0' COMMENT '父级菜单权限id',
  `order_num` int NULL DEFAULT 0 COMMENT '排序',
  `type` tinyint NULL DEFAULT 1 COMMENT '菜单权限类型(1:目录;2:菜单;3:按钮)',
  `status` tinyint NULL DEFAULT 1 COMMENT '状态1:正常 0：禁用',
  `create_time` datetime NULL DEFAULT NULL COMMENT '创建时间',
  `update_time` datetime NULL DEFAULT NULL COMMENT '更新时间',
  `deleted` tinyint NULL DEFAULT 1 COMMENT '是否删除(1未删除；0已删除)',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '权限表（菜单）' ROW_FORMAT = DYNAMIC;

-- ----------------------------
-- Records of sys_permission
-- ----------------------------
INSERT INTO `sys_permission` VALUES ('1236916745927790556', 'btn-user-delete', '删除用户权限', '', 'sys:user:delete', '/api/user', 'DELETE', '', '1236916745927790575', 100, 3, 1, '2020-01-08 15:42:50', NULL, 1);
INSERT INTO `sys_permission` VALUES ('1236916745927790557', 'btn-log-delete', '删除日志权限', '', 'sys:log:delete', '/api/log', 'DELETE', '', '1236916745927790589', 100, 3, 1, '2020-01-08 16:12:53', NULL, 1);
INSERT INTO `sys_permission` VALUES ('1236916745927790558', '', '接口管理', 'el-icon-s-ticket', '', '/swagger', 'GET', 'swagger', '1236916745927790569', 97, 2, 1, '2020-01-08 14:28:56', '2020-04-04 22:19:39', 1);
INSERT INTO `sys_permission` VALUES ('1236916745927790560', '', '菜单权限管理', 'el-icon-menu', '', '/menus', 'GET', 'menus', '1236916745927790564', 98, 2, 1, '2020-01-06 21:55:59', '2020-04-07 22:55:14', 1);
INSERT INTO `sys_permission` VALUES ('1236916745927790561', 'btn-user-add', '新增用户权限', '', 'sys:user:add', '/api/user', 'POST', '', '1236916745927790575', 100, 3, 1, '2020-01-08 15:40:36', NULL, 1);
INSERT INTO `sys_permission` VALUES ('1236916745927790562', 'btn-role-update', '更新角色权限', '', 'sys:role:update', '/api/role', 'PUT', '', '1236916745927790578', 100, 3, 1, '2020-01-08 16:09:55', '2020-04-04 22:31:22', 1);
INSERT INTO `sys_permission` VALUES ('1236916745927790563', 'btn-permission-delete', '删除菜单权限', '', 'sys:permission:delete', '/api/permission', 'DELETE', '', '1236916745927790560', 100, 3, 1, '2020-01-08 15:48:37', NULL, 1);
INSERT INTO `sys_permission` VALUES ('1236916745927790564', '', '组织管理', 'el-icon-menu', '', '/org', '', 'org', '0', 100, 1, 1, '2020-01-06 21:53:55', '2022-05-14 15:11:29', 1);
INSERT INTO `sys_permission` VALUES ('1236916745927790565', 'btn-permission-list', '查询菜单权限列表权限', '', 'sys:permission:list', '/api/permissions', 'POST', '', '1236916745927790560', 100, 3, 1, '2020-01-08 15:46:36', NULL, 1);
INSERT INTO `sys_permission` VALUES ('1236916745927790568', 'btn-user-list', '查询用户信息列表权限', '', 'sys:user:list', '/api/users', 'POST', '', '1236916745927790575', 100, 3, 1, '2020-01-08 15:39:55', NULL, 1);
INSERT INTO `sys_permission` VALUES ('1236916745927790569', '', '系统管理', 'el-icon-s-tools', '', '/sys', '', 'sys', '0', 98, 1, 1, '2020-01-08 13:55:56', NULL, 1);
INSERT INTO `sys_permission` VALUES ('1236916745927790570', 'btn-role-delete', '删除角色权限', '', 'sys:role:delete', '/api/role/*', 'DELETE', '', '1236916745927790578', 100, 3, 1, '2020-01-08 16:11:22', NULL, 1);
INSERT INTO `sys_permission` VALUES ('1236916745927790571', '', 'SQL监控', 'el-icon-s-data', '', '/sql', 'GET', 'sql', '1236916745927790569', 96, 2, 1, '2020-01-08 14:30:01', '2020-04-04 22:18:36', 1);
INSERT INTO `sys_permission` VALUES ('1236916745927790572', 'btn-role-add', '新增角色权限', '', 'sys:role:add', '/api/role', 'POST', '', '1236916745927790578', 100, 3, 1, '2020-01-08 15:50:00', '2020-03-12 05:15:46', 1);
INSERT INTO `sys_permission` VALUES ('1236916745927790574', 'btn-role-detail', '角色详情权限', '', 'sys:role:detail', '/api/role/*', 'GET', '', '1236916745927790578', 100, 3, 1, '2020-01-08 16:10:32', NULL, 1);
INSERT INTO `sys_permission` VALUES ('1236916745927790575', '', '用户管理', 'el-icon-user-solid', '', '/user', '', 'user', '1236916745927790564', 100, 2, 1, '2020-01-07 19:49:37', '2022-05-14 15:25:36', 1);
INSERT INTO `sys_permission` VALUES ('1236916745927790577', 'btn-permission-update', '更新菜单权限', '', 'sys:permission:update', '/api/permission', 'PUT', '', '1236916745927790560', 100, 3, 1, '2020-01-08 15:47:56', NULL, 1);
INSERT INTO `sys_permission` VALUES ('1236916745927790578', '', '角色管理', 'el-icon-user', '', '/roles', '', 'roles', '1236916745927790564', 99, 2, 1, '2020-01-06 22:33:55', '2020-04-07 22:59:44', 1);
INSERT INTO `sys_permission` VALUES ('1236916745927790579', 'btn-user-update-role', '赋予用户角色权限', '', 'sys:user:role:update', '/api/user/roles', 'PUT', '', '1236916745927790575', 100, 3, 1, '2020-01-08 15:41:20', NULL, 1);
INSERT INTO `sys_permission` VALUES ('1236916745927790580', 'btn-user-update', '更新用户信息权限', '', 'sys:user:update', '/api/user', 'PUT', '', '1236916745927790575', 100, 3, 1, '2020-01-08 15:42:06', '2020-04-09 13:14:01', 1);
INSERT INTO `sys_permission` VALUES ('1236916745927790581', 'btn-role-add', '角色管理-新增角色', '', 'sys:role:add', '/api/role', 'POST', '', '1236916745927790578', 100, 3, 1, '2020-01-08 15:28:09', '2020-01-08 15:29:31', 0);
INSERT INTO `sys_permission` VALUES ('1236916745927790582', 'btn-permission-add', '新增菜单权限', '', 'sys:permission:add', '/api/permission', 'POST', '', '1236916745927790560', 100, 3, 1, '2020-01-08 15:47:16', NULL, 1);
INSERT INTO `sys_permission` VALUES ('1236916745927790583', 'btn-role-list', '查询角色列表权限', '', 'sys:role:list', '/api/roles', 'POST', '', '1236916745927790578', 100, 3, 1, '2020-01-08 15:49:20', NULL, 1);
INSERT INTO `sys_permission` VALUES ('1236916745927790589', '', '日志管理', 'el-icon-user-solid', '', '/logs', '', 'logs', '1236916745927790569', 100, 2, 1, '2020-01-08 13:57:12', '2020-04-08 18:54:16', 1);
INSERT INTO `sys_permission` VALUES ('1236916745927790591', 'btn-log-list', '查询日志列表权限', '', 'sys:log:list', '/api/logs', 'POST', '', '1236916745927790589', 100, 3, 1, '2020-01-08 16:12:14', NULL, 1);
INSERT INTO `sys_permission` VALUES ('1525716686727155712', 'user-test', '新增用户路由', 'user-test', '/user-test', '/user-test', 'GET', 'user-test', '1236916745927790575', 0, 3, 1, '2022-05-15 05:56:19', '2022-05-15 05:57:09', 1);

-- ----------------------------
-- Table structure for sys_role
-- ----------------------------
DROP TABLE IF EXISTS `sys_role`;
CREATE TABLE `sys_role`  (
  `id` varchar(64) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '主键',
  `name` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '角色名称',
  `description` varchar(300) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `status` tinyint NULL DEFAULT 1 COMMENT '状态(1:正常0:弃用)',
  `create_time` datetime NULL DEFAULT NULL COMMENT '创建时间',
  `update_time` datetime NULL DEFAULT NULL COMMENT '更新时间',
  `deleted` tinyint NULL DEFAULT 1 COMMENT '是否删除(1未删除；0已删除)',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '角色表' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of sys_role
-- ----------------------------
INSERT INTO `sys_role` VALUES ('1237258113002901512', '超级管理员', '我是超级管理员', 1, '2020-01-06 23:37:45', '2020-04-09 15:14:01', 1);
INSERT INTO `sys_role` VALUES ('1237258113002901513', '标记用户角色测试', '标记用户角色测试', 1, '2020-01-08 10:53:35', '2020-04-04 18:20:54', 1);
INSERT INTO `sys_role` VALUES ('1237258113002901514', '测试删除角色', '432432', 1, '2020-01-08 10:54:24', '2020-04-08 00:39:09', 1);
INSERT INTO `sys_role` VALUES ('1237258113002901515', 'test', '我是test', 1, '2020-01-07 21:19:04', '2020-04-09 13:59:53', 1);
INSERT INTO `sys_role` VALUES ('1245949043784421376', '测试123水水水水', '水水水水', 1, '2020-04-03 13:39:35', '2020-04-06 20:42:55', 0);
INSERT INTO `sys_role` VALUES ('1247141318979883008', 'sssssss', '', 1, '2020-04-06 20:37:16', '2020-04-06 20:42:52', 0);
INSERT INTO `sys_role` VALUES ('1247141375170973696', 'aaaaa', 'aaaa', 1, '2020-04-06 20:37:29', '2020-04-06 20:42:50', 0);
INSERT INTO `sys_role` VALUES ('1247141409027395584', 'ddddd', '', 1, '2020-04-06 20:37:37', '2020-04-06 20:42:48', 0);
INSERT INTO `sys_role` VALUES ('1247141434457460736', 'cccccc', '', 1, '2020-04-06 20:37:43', '2020-04-06 20:42:45', 0);
INSERT INTO `sys_role` VALUES ('1247141460004966400', 'xxxxxx', '', 1, '2020-04-06 20:37:49', '2020-04-06 20:40:23', 0);
INSERT INTO `sys_role` VALUES ('1247141493991411712', 'vvvvvv', '', 1, '2020-04-06 20:37:58', '2020-04-06 20:42:43', 0);

-- ----------------------------
-- Table structure for sys_role_permission
-- ----------------------------
DROP TABLE IF EXISTS `sys_role_permission`;
CREATE TABLE `sys_role_permission`  (
  `id` varchar(64) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '主键',
  `role_id` varchar(64) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '角色id',
  `permission_id` varchar(64) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '菜单权限id',
  `create_time` datetime NULL DEFAULT NULL COMMENT '创建时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '角色权限表' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of sys_role_permission
-- ----------------------------
INSERT INTO `sys_role_permission` VALUES ('1248128480433016832', '1237258113002901515', '1236916745927790568', '2020-04-09 13:59:53');
INSERT INTO `sys_role_permission` VALUES ('1248128480433016833', '1237258113002901515', '1236916745927790564', '2020-04-09 13:59:53');
INSERT INTO `sys_role_permission` VALUES ('1248128480433016834', '1237258113002901515', '1236916745927790575', '2020-04-09 13:59:53');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704960', '1237258113002901512', '1236916745927790564', '2020-04-09 15:14:01');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704961', '1237258113002901512', '1236916745927790575', '2020-04-09 15:14:01');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704962', '1237258113002901512', '1236916745927790556', '2020-04-09 15:14:01');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704963', '1237258113002901512', '1236916745927790561', '2020-04-09 15:14:01');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704964', '1237258113002901512', '1236916745927790568', '2020-04-09 15:14:01');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704965', '1237258113002901512', '1236916745927790579', '2020-04-09 15:14:01');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704966', '1237258113002901512', '1236916745927790580', '2020-04-09 15:14:01');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704967', '1237258113002901512', '1236916745927790578', '2020-04-09 15:14:01');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704968', '1237258113002901512', '1236916745927790562', '2020-04-09 15:14:01');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704969', '1237258113002901512', '1236916745927790570', '2020-04-09 15:14:01');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704970', '1237258113002901512', '1236916745927790572', '2020-04-09 15:14:01');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704971', '1237258113002901512', '1236916745927790574', '2020-04-09 15:14:01');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704972', '1237258113002901512', '1236916745927790583', '2020-04-09 15:14:01');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704973', '1237258113002901512', '1236916745927790560', '2020-04-09 15:14:01');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704974', '1237258113002901512', '1236916745927790563', '2020-04-09 15:14:01');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704975', '1237258113002901512', '1236916745927790565', '2020-04-09 15:14:01');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704976', '1237258113002901512', '1236916745927790577', '2020-04-09 15:14:01');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704977', '1237258113002901512', '1236916745927790582', '2020-04-09 15:14:01');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704978', '1237258113002901512', '1236916745927790569', '2020-04-09 15:14:01');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704979', '1237258113002901512', '1236916745927790589', '2020-04-09 15:14:01');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704980', '1237258113002901512', '1236916745927790557', '2020-04-09 15:14:01');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704981', '1237258113002901512', '1236916745927790591', '2020-04-09 15:14:01');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704982', '1237258113002901512', '1236916745927790558', '2020-04-09 15:14:01');
INSERT INTO `sys_role_permission` VALUES ('1248147135153704983', '1237258113002901512', '1236916745927790571', '2020-04-09 15:14:01');

-- ----------------------------
-- Table structure for sys_user
-- ----------------------------
DROP TABLE IF EXISTS `sys_user`;
CREATE TABLE `sys_user`  (
  `id` varchar(64) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '用户id',
  `username` varchar(50) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '账户',
  `password` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '用户密码密文',
  `phone` varchar(20) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '手机号码',
  `real_name` varchar(60) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '真实名称',
  `nick_name` varchar(60) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '昵称',
  `email` varchar(50) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '邮箱(唯一)',
  `status` tinyint NULL DEFAULT 1 COMMENT '账户状态(1.正常 2.锁定 )',
  `sex` tinyint NULL DEFAULT 1 COMMENT '性别(1.男 2.女)',
  `deleted` tinyint NULL DEFAULT 1 COMMENT '是否删除(1未删除；0已删除)',
  `create_id` varchar(64) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '创建人',
  `update_id` varchar(64) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '更新人',
  `create_where` tinyint NULL DEFAULT 1 COMMENT '创建来源(1.web 2.android 3.ios )',
  `create_time` datetime NULL DEFAULT NULL COMMENT '创建时间',
  `update_time` datetime NULL DEFAULT NULL,
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '用户表' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of sys_user
-- ----------------------------
INSERT INTO `sys_user` VALUES ('1237361915165020161', 'admin', '$2a$10$BGys1N0SGdynf6HzdARzUeXZN7JZq5MBE5C6b/oZD108eIYGuq.rK', '13888888888', '小池', '超级管理员', '875267425@qq.com', 1, 1, 1, NULL, '1237361915165020161', 1, '2019-09-22 19:38:05', '2020-04-07 18:08:52');
INSERT INTO `sys_user` VALUES ('1237365636208922624', 'test', '$2a$10$BGys1N0SGdynf6HzdARzUeXZN7JZq5MBE5C6b/oZD108eIYGuq.rK', '16666666666', NULL, NULL, NULL, 1, 2, 1, '1237361915165020161', '1237361915165020161', 1, '2020-03-10 13:12:12', '2020-04-06 18:11:58');
INSERT INTO `sys_user` VALUES ('1246071816909361152', 'test123', '$2a$10$aT26Bk4wqx0DC6PuwpxLDuiHa121g1qsTgbH5.bxf14VPv4PRtLg.', '13666666666', 'test测试账号', '测试账号', '222222222@qq.com', 1, 1, 1, NULL, '1237361915165020161', 1, '2020-04-03 21:47:27', '2020-04-04 15:13:44');
INSERT INTO `sys_user` VALUES ('1246347518934126592', 'aaaaaa啊啊啊啊', '$2a$10$l1H90jy1UyZaHnsnZ7qCHOL8d83RUZn8A0N0aIEHWfGe2u.LmYkES', '13333333336', 'aaaaa', 'aaaaaa', 'aaaaaaaa@qq.com', 1, 1, 1, NULL, '1237361915165020161', 1, '2020-04-04 16:02:59', '2020-04-04 17:18:34');
INSERT INTO `sys_user` VALUES ('1246352746546860032', 'bb啵啵c呃呃呃呃呃', '$2a$10$ex6BCxAd.ubD6ogPgj/jKOvr1HYcczXnGUXGSiP2Lh8uTcSD7dngK', '13888888888', 'bbbbb', 'bbb', 'bbbbbbbbbb@qq.com', 1, 2, 1, NULL, '1247515643591397376', 1, '2020-04-04 16:23:46', '2020-04-08 12:01:41');
INSERT INTO `sys_user` VALUES ('1246362842827984896', '我只是想测试123', '$2a$10$31JFwSh4bGCD/b.rwnKYHeHlqP5q3hTQZGr3nsSJW2HujULNfMrii', '13555555553', 'formceshiddd', 'formceshiddd', 'bbb888888@qq.com', 1, 2, 1, NULL, '1237361915165020161', 2, '2020-04-04 17:03:53', '2020-04-04 17:44:09');
INSERT INTO `sys_user` VALUES ('1246368763562037248', '水水水123', '$2a$10$FDofRcNN18MbTGFHXQLSf.wsmFGozn3JUTVIvTiaiqRNthrdxKTzG', '15777777778', '水水水水123', '水水水水123', 'qq55555@qq.com', 1, 1, 1, NULL, '1237361915165020161', 2, '2020-04-04 17:27:24', '2020-04-04 17:44:00');
INSERT INTO `sys_user` VALUES ('1247078461865070592', 'ddddddd', '$2a$10$Sw2Ql7BnqqX2WCE7UZxoP.x5UeQe/7QlBLD.8WQgA5VFETi04aN5S', '13222222222', 'ddddd', 'dddddd', '55555555@qq.com', 1, 1, 1, NULL, NULL, 1, '2020-04-06 16:27:30', NULL);
INSERT INTO `sys_user` VALUES ('1247078545952477184', 'ccccccccc', '$2a$10$BdjM5j3wiVHF1XHymLxaxOfMeh4.uF7rnETKaNUB37yVWylFKwSRK', '13555555555', 'ccccc', 'cccc', '22222555@qq.com', 1, 2, 1, NULL, NULL, 1, '2020-04-06 16:27:50', '2020-04-06 16:31:06');
INSERT INTO `sys_user` VALUES ('1247078658519207936', 'xxxxxxxxx', '$2a$10$1/RUJ7Na1tsgUfYnygnlAead0odJBhREJbb.7G2pW5YAaIX/WJenO', '13333333333', 'xxxxxxxxx', 'xxxxxxx', '2444444445@qq.com', 1, 2, 1, NULL, NULL, 1, '2020-04-06 16:28:17', NULL);
INSERT INTO `sys_user` VALUES ('1247078839641837568', '8888888888', '$2a$10$I79.b91kXfwhG6Nw8EsQY.ZSuk5dffpt1fwQqJx01IB/7C.bErozq', '13999999999', '888888', '88888', '888888888@qq.com', 1, 1, 1, NULL, NULL, 1, '2020-04-06 16:29:00', '2020-04-06 16:32:38');
INSERT INTO `sys_user` VALUES ('1247079478228815872', 'eeeeeeeeee', '$2a$10$3EsSOzRQ7SheqTvf3I9l9.hnpjAAIyRnGnLLYA28CWb0niFgN6iry', '13688888888', 'eeee', 'eee', 'eeeeee@qq.com', 1, 1, 1, NULL, NULL, 1, '2020-04-06 16:31:32', '2020-04-06 16:38:23');
INSERT INTO `sys_user` VALUES ('1247462611247828992', 'ssssss', '$2a$10$BDHPYj6a7hT7wz.cbC6uGOVV57r7C0CmrM59EMBtdxo34astzQLJS', '13333333333', 'ssssss', 'ssssss', '333333@qq.com', 1, 1, 1, NULL, NULL, 1, '2020-04-07 17:53:58', NULL);
INSERT INTO `sys_user` VALUES ('1247515643591397376', 'admin123', '$2a$10$RlBzDJm2IOb5...piM.yEObU.r0D6Jd5XrszKzu/r3mFRPTx0gQbi', '13699999999', 'admin测试', 'admin测试', 'admin123@qq.com', 1, 1, 1, NULL, '1237361915165020161', 1, '2020-04-07 21:24:42', '2020-04-08 12:04:46');

-- ----------------------------
-- Table structure for sys_user_role
-- ----------------------------
DROP TABLE IF EXISTS `sys_user_role`;
CREATE TABLE `sys_user_role`  (
  `id` varchar(64) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '主键',
  `user_id` varchar(64) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '用户id',
  `role_id` varchar(64) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '角色id',
  `create_time` datetime NULL DEFAULT NULL COMMENT '创建时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '用户角色表' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of sys_user_role
-- ----------------------------
INSERT INTO `sys_user_role` VALUES ('1239912670904324096', '1237361915165020161', '1237258113002901512', '2020-03-17 21:53:12');
INSERT INTO `sys_user_role` VALUES ('1246339384232513536', '1246071816909361152', '1237258113002901515', '2020-04-04 15:30:40');
INSERT INTO `sys_user_role` VALUES ('1247515049136885760', '1237365636208922624', '1237258113002901515', '2020-04-07 21:22:20');
INSERT INTO `sys_user_role` VALUES ('1247736718564659200', '1247515643591397376', '1237258113002901515', '2020-04-08 12:03:10');

SET FOREIGN_KEY_CHECKS = 1;
