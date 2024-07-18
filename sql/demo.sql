/*
 Navicat Premium Data Transfer

 Source Server         : mysql
 Source Server Type    : MySQL
 Source Server Version : 80035 (8.0.35)
 Source Host           : localhost:3306
 Source Schema         : demo

 Target Server Type    : MySQL
 Target Server Version : 80035 (8.0.35)
 File Encoding         : 65001

 Date: 16/07/2024 16:57:23
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for login_log
-- ----------------------------
DROP TABLE IF EXISTS `login_log`;
CREATE TABLE `login_log`  (
  `id` bigint UNSIGNED NOT NULL AUTO_INCREMENT COMMENT '主键id',
  `username` varchar(64) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL DEFAULT '' COMMENT '用户名',
  `ip_address` varchar(64) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL DEFAULT '' COMMENT 'ip地址',
  `ip_source` varchar(64) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL DEFAULT '' COMMENT 'ip来源地址',
  `browser` varchar(32) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL DEFAULT '' COMMENT '浏览器',
  `os` varchar(32) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL DEFAULT '' COMMENT '操作系统',
  `login_status` tinyint NOT NULL DEFAULT 0 COMMENT '登陆状态（0->失败 1->成功）',
  `response_message` varchar(32) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL DEFAULT '' COMMENT '响应数据',
  `gmt_create` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  `is_deleted` tinyint NOT NULL DEFAULT 0 COMMENT '逻辑删除',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 211 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci COMMENT = '登陆日志表' ROW_FORMAT = DYNAMIC;

-- ----------------------------
-- Records of login_log
-- ----------------------------

-- ----------------------------
-- Table structure for menu
-- ----------------------------
DROP TABLE IF EXISTS `menu`;
CREATE TABLE `menu`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '菜单主键id',
  `name` varchar(32) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '菜单名称',
  `path` varchar(64) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL DEFAULT '#' COMMENT '菜单路由',
  `component` varchar(64) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL DEFAULT '#' COMMENT '菜单组件',
  `icon` varchar(32) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL DEFAULT '#' COMMENT '菜单图标',
  `menu_type` varchar(1) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '菜单类型（菜单 M   目录 C  按钮 B）',
  `perm` varchar(64) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT '#',
  `parent_id` bigint NOT NULL DEFAULT 0 COMMENT '父菜单id',
  `order_num` int NULL DEFAULT NULL COMMENT '菜单排序',
  `is_hidden` tinyint(1) NOT NULL DEFAULT 0 COMMENT '是否隐藏（0 不隐藏   1 隐藏）',
  `is_deleted` tinyint(1) NOT NULL DEFAULT 0 COMMENT '逻辑删除 （0 正常  1 删除）',
  `gmt_create` datetime NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  `gmt_update` datetime NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP COMMENT '菜单更新时间',
  `remark` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '注释信息',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 67 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci COMMENT = '菜单表' ROW_FORMAT = DYNAMIC;

-- ----------------------------
-- Records of menu
-- ----------------------------
INSERT INTO `menu` VALUES (1, '控制台', '/welcome', '/welcome/Welcome', 'bar-chart', 'C', '#', 0, 1, 0, 0, '2022-12-08 08:41:18', '2022-12-14 08:04:39', NULL);
INSERT INTO `menu` VALUES (2, '权限管理', '#', '#', 'safety', 'M', '#', 0, 5, 0, 0, '2022-12-08 08:42:10', '2023-03-13 16:48:25', '权限管理菜单');
INSERT INTO `menu` VALUES (3, '菜单管理', '/perm/menu', '/permission/Menu', 'unordered-list', 'C', '#', 2, 1, 0, 0, '2022-12-08 08:42:52', '2022-12-08 08:44:20', NULL);
INSERT INTO `menu` VALUES (6, '系统管理', '/project', '#', 'setting', 'M', '#', 0, 7, 0, 0, '2022-12-08 08:42:52', '2023-03-13 16:48:41', '系统管理菜单');
INSERT INTO `menu` VALUES (7, '角色管理', '/role', '/permission/Role', 'security-scan', 'C', '#', 2, 2, 0, 0, '2022-12-08 08:42:52', '2022-12-08 08:42:52', '角色管理界面');
INSERT INTO `menu` VALUES (8, '日志管理', '#', '#', 'pic-center', 'M', '#', 0, 6, 0, 0, '2022-12-19 11:22:07', '2023-03-13 16:48:37', '日志信息管理');
INSERT INTO `menu` VALUES (9, '登陆日志', '/log/loginLog', '/log/LoginLog', 'pic-left', 'C', '#', 8, 1, 0, 0, '2022-12-19 11:24:55', '2023-03-13 16:32:28', '登陆日志界面');
INSERT INTO `menu` VALUES (10, '操作日志', '/log/operateLog', '/log/OperateLog', 'pic-right', 'C', '#', 8, 2, 0, 0, '2022-12-19 11:25:39', '2023-03-13 16:32:34', '操作日志界面');
INSERT INTO `menu` VALUES (11, '系统监控', '#', '#', 'radar-chart', 'M', '#', 6, 2, 0, 0, '2022-12-19 11:31:15', '2022-12-19 11:31:15', '系统监控管理');
INSERT INTO `menu` VALUES (12, '服务监控', '/monitor/server', '/system/monitor/ServerMonitor', 'cloud-server', 'C', '#', 11, 1, 0, 0, '2022-12-19 11:34:34', '2023-01-31 09:04:38', '服务器信息监控');
INSERT INTO `menu` VALUES (14, '系统配置', '#', '#', 'save', 'M', '#', 6, 1, 0, 0, '2022-12-19 15:45:24', '2022-12-19 15:45:24', '系统配置信息');
INSERT INTO `menu` VALUES (15, '网站配置', '/setting/websiteConfig', '/system/setting/WebsiteConfig', 'apartment', 'C', '#', 14, 1, 0, 0, '2022-12-19 15:46:39', '2023-01-31 09:06:06', '网站配置页面');
INSERT INTO `menu` VALUES (16, '存储配置', '/setting/objectStore', '/system/setting/ObjectStore', 'cloud-server', 'C', '#', 14, 2, 0, 0, '2022-12-19 15:49:01', '2023-01-31 09:06:06', '对象存储页面');
INSERT INTO `menu` VALUES (17, '[后台]查询后台菜单列表', '#', '#', '#', 'B', 'security:menu:query', 3, 1, 0, 0, '2023-03-08 11:04:49', '2023-03-08 11:04:49', '[后台]查询后台菜单列表');
INSERT INTO `menu` VALUES (18, '[后台]查询指定菜单信息', '#', '', '#', 'B', 'security:menu:get', 3, 2, 0, 0, '2023-03-08 11:05:15', '2023-03-08 11:09:55', '[后台]查询指定菜单信息');
INSERT INTO `menu` VALUES (19, '[后台]查询菜单权限列表', '#', '', '#', 'B', 'security:menu:list', 3, 3, 0, 0, '2023-03-08 11:10:15', '2023-03-08 11:10:15', '[后台]查询菜单权限列表');
INSERT INTO `menu` VALUES (20, '[后台]查询所有菜单id列表', '#', '', '#', 'B', 'security:menu:list', 3, 4, 0, 0, '2023-03-08 11:10:35', '2023-03-08 11:10:35', '[后台]查询所有菜单id列表');
INSERT INTO `menu` VALUES (21, '[后台]新增菜单信息', '#', '', '#', 'B', 'security:menu:save', 3, 5, 0, 0, '2023-03-08 11:11:43', '2023-03-08 11:11:43', '[后台]新增菜单信息');
INSERT INTO `menu` VALUES (22, '[后台]更新菜单信息', '#', '', '#', 'B', 'security:menu:update', 3, 6, 0, 0, '2023-03-08 11:11:58', '2023-03-08 11:11:58', '[后台]更新菜单信息');
INSERT INTO `menu` VALUES (23, '[后台]删除菜单信息', '#', '', '#', 'B', 'security:menu:delete', 3, 7, 0, 0, '2023-03-08 11:12:16', '2023-03-08 11:12:16', '[后台]删除菜单信息');
INSERT INTO `menu` VALUES (24, '[后台]分页查询角色列表', '#', '', '#', 'B', 'security:menu:query', 7, 1, 0, 0, '2023-03-08 11:12:44', '2023-03-08 11:12:44', '[后台]分页查询角色列表');
INSERT INTO `menu` VALUES (25, '[后台]查询角色详细信息', '#', '', '#', 'B', 'security:role:get', 7, 2, 0, 0, '2023-03-08 11:12:58', '2023-03-10 08:48:19', '[后台]查询角色详细信息');
INSERT INTO `menu` VALUES (26, '[后台]新增角色信息', '#', '', '#', 'B', 'security:role:save', 7, 3, 0, 0, '2023-03-08 11:13:13', '2023-03-10 08:48:19', '[后台]新增角色信息');
INSERT INTO `menu` VALUES (27, '[后台]更新角色信息', '#', '', '#', 'B', 'security:role:update', 7, 4, 0, 0, '2023-03-08 11:13:38', '2023-03-10 08:48:19', '[后台]更新角色信息');
INSERT INTO `menu` VALUES (28, '[后台]更新角色权限列表', '#', '', '#', 'B', 'security:role:authorization', 7, 5, 0, 0, '2023-03-08 11:13:53', '2023-03-10 08:48:20', '[后台]更新角色权限列表');
INSERT INTO `menu` VALUES (29, '[后台]删除角色信息', '#', '', '#', 'B', 'security:role:delete', 7, 6, 0, 0, '2023-03-08 11:14:06', '2023-03-10 08:48:20', '[后台]删除角色信息');
INSERT INTO `menu` VALUES (30, '[后台]查询登录日志信息列表', '#', '', '#', 'B', 'system:loginlog:query', 9, 1, 0, 0, '2023-03-08 11:25:39', '2023-03-08 11:30:02', '[后台]查询登录日志信息列表');
INSERT INTO `menu` VALUES (31, '[后台]批量删除日志信息', '#', '', '#', 'B', 'system:loginlog:delete', 9, 2, 0, 0, '2023-03-08 11:25:56', '2023-03-09 15:17:00', '[后台]批量删除日志信息');
INSERT INTO `menu` VALUES (32, '[后台]获取系统资源信息', '#', '', '#', 'B', 'system:monitor:list', 12, 1, 0, 0, '2023-03-08 11:26:43', '2023-03-08 11:26:43', '[后台]获取系统资源信息');
INSERT INTO `menu` VALUES (33, '[后台]查询对象存储信息', '#', '', '#', 'B', 'system:objectStore:query', 16, 1, 0, 0, '2023-03-08 11:28:43', '2023-03-08 11:28:43', '[后台]查询对象存储信息');
INSERT INTO `menu` VALUES (34, '[后台]查询对象存储基础信息', '#', '', '#', 'B', 'system:objectStore:query', 16, 2, 0, 0, '2023-03-08 11:28:59', '2023-03-08 11:28:59', '[后台]查询对象存储基础信息');
INSERT INTO `menu` VALUES (35, '[后台]查询对象存储下拉框信息', '#', '', '#', 'B', 'system:objectStore:list', 16, 3, 0, 0, '2023-03-08 11:31:01', '2023-03-08 11:31:01', '[后台]查询对象存储下拉框信息');
INSERT INTO `menu` VALUES (36, '[后台]查询对象存储详细信息', '#', '', '#', 'B', 'system:objectStore:get', 16, 4, 0, 0, '2023-03-08 11:31:19', '2023-03-08 11:31:19', '[后台]查询对象存储详细信息');
INSERT INTO `menu` VALUES (37, '[后台]新增对象存储信息', '#', '', '#', 'B', 'system:objectStore:save', 16, 5, 0, 0, '2023-03-08 11:31:53', '2023-03-08 11:31:53', '[后台]新增对象存储信息');
INSERT INTO `menu` VALUES (38, '[后台]修改对象存储信息', '#', '', '#', 'B', 'system:objectStore:update', 16, 6, 0, 0, '2023-03-08 11:32:12', '2023-03-08 11:32:12', '[后台]修改对象存储信息');
INSERT INTO `menu` VALUES (39, '[后台]修改对象存储状态', '#', '', '#', 'B', 'system:objectStore:update', 16, 7, 0, 0, '2023-03-08 11:32:31', '2023-03-08 11:32:31', '[后台]修改对象存储状态');
INSERT INTO `menu` VALUES (40, '[后台]批量删除对象存储信息', '#', '', '#', 'B', 'system:objectStore:delete', 16, 8, 0, 0, '2023-03-08 11:32:46', '2023-03-08 11:32:46', '[后台]批量删除对象存储信息');
INSERT INTO `menu` VALUES (41, '[后台]查询操作日志列表', '#', '', '#', 'B', 'system:operateLog:query', 10, 1, 0, 0, '2023-03-08 11:33:09', '2023-03-08 11:33:09', '[后台]查询操作日志列表');
INSERT INTO `menu` VALUES (42, '[后台]批量删除操作日志信息', '#', '', '#', 'B', 'system:operateLog:delete', 10, 5, 0, 0, '2023-03-08 11:33:23', '2023-03-09 15:22:31', '[后台]批量删除操作日志信息');
INSERT INTO `menu` VALUES (44, '[通用]查询网站配制信息', '#', '', '#', 'B', 'system:websiteConfig:query', 15, 1, 0, 0, '2023-03-08 11:36:13', '2023-03-08 11:36:13', '[通用]查询网站配制信息');
INSERT INTO `menu` VALUES (45, '[后台]更新网站配制信息', '#', '', '#', 'B', 'system:websiteConfig:update', 15, 2, 0, 0, '2023-03-08 11:38:27', '2023-03-08 11:38:27', '[后台]更新网站配制信息');
INSERT INTO `menu` VALUES (49, '用户管理', '/user', '#', 'team', 'M', '#', 0, 4, 0, 0, '2023-03-13 16:37:01', '2023-05-30 11:34:38', '用户管理菜单');
INSERT INTO `menu` VALUES (53, '用户管理', '/user/userList', '/user/User', 'user', 'C', '#', 49, 1, 0, 0, '2023-03-14 10:28:49', '2023-03-14 10:29:11', '用户管理目录');
INSERT INTO `menu` VALUES (55, '[后台]查询用户列表', '#', '', '#', 'B', 'security:user:query', 53, 1, 0, 0, '2023-05-29 14:27:47', '2023-05-29 14:27:47', '[后台]查询用户列表');
INSERT INTO `menu` VALUES (56, '[后台]新增用户信息', '#', '', '#', 'B', 'security:user:save', 53, 2, 0, 0, '2023-05-29 14:28:03', '2023-05-29 14:28:03', '[后台]新增用户信息');
INSERT INTO `menu` VALUES (57, '[后台]更新用户信息', '#', '', '#', 'B', 'security:user:update', 53, 3, 0, 0, '2023-05-29 14:28:19', '2023-05-29 14:28:19', '[后台]更新用户信息');
INSERT INTO `menu` VALUES (58, '[后台]重置密码', '#', '', '#', 'B', 'security:user:updatePassword', 53, 4, 0, 0, '2023-05-29 14:28:34', '2023-05-30 09:54:36', '[后台]重置密码');
INSERT INTO `menu` VALUES (59, '[后台]删除用户信息', '#', '', '#', 'B', 'security:user:delete', 53, 6, 0, 0, '2023-05-29 14:28:51', '2023-05-29 14:28:51', '[后台]删除用户信息');
INSERT INTO `menu` VALUES (60, '图标管理', '#', '#', 'gold', 'M', '#', 0, 2, 0, 0, '2023-05-30 10:16:34', '2023-05-30 10:16:34', '图标管理');
INSERT INTO `menu` VALUES (61, '常规图标', '/icon/normalIcon', '/icon/Icon', 'tag', 'C', '#', 60, 1, 0, 0, '2023-05-30 10:21:19', '2023-05-30 10:21:19', '常规图标');
INSERT INTO `menu` VALUES (62, '多菜图标', '/icon/colorIcon', '/icon/ColorIcon', 'tags', 'C', '', 60, 2, 0, 0, '2023-05-30 11:23:42', '2023-05-30 11:23:42', '多菜图标');
INSERT INTO `menu` VALUES (63, '文章管理', '#', '#', 'snippets', 'M', '#', 0, 3, 0, 0, '2023-05-30 11:36:22', '2023-05-30 11:36:22', '文章管理菜单');
INSERT INTO `menu` VALUES (64, '文章列表', '/article/articleList', '/article/ArticleList', 'form', 'C', '#', 63, 1, 0, 0, '2023-05-30 11:36:56', '2023-05-30 11:36:56', '文章列表');
INSERT INTO `menu` VALUES (65, '分类管理', '/article/category', '/article/Category', 'border-outer', 'C', '#', 63, 2, 0, 0, '2023-05-30 11:37:37', '2023-05-30 11:37:37', '分类管理');
INSERT INTO `menu` VALUES (66, '标签管理', '/article/tag', '/article/Tag', 'thunderbolt', 'C', '#', 63, 3, 0, 0, '2023-05-30 11:38:29', '2023-05-30 11:38:29', '标签管理');

-- ----------------------------
-- Table structure for object_store
-- ----------------------------
DROP TABLE IF EXISTS `object_store`;
CREATE TABLE `object_store`  (
  `id` bigint NOT NULL AUTO_INCREMENT,
  `object_store_name` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL COMMENT '对象存储名称',
  `object_store_label` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL COMMENT '对象存储标识',
  `domain_url` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NULL DEFAULT NULL COMMENT '若为空，则使用默认值',
  `access_key` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NULL DEFAULT NULL COMMENT 'accessKey  或 username',
  `access_key_secret` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NULL DEFAULT NULL COMMENT '密钥',
  `endpoint` varchar(150) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NULL DEFAULT NULL COMMENT '地域节点 / 服务ip',
  `bucket` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NULL DEFAULT NULL COMMENT '存储桶名称 /  服务器路径',
  `is_perfect` int NULL DEFAULT 0 COMMENT '信息是否完善',
  `is_pass_test` int NULL DEFAULT 0 COMMENT '是否通过上传测试',
  `is_deleted` int NULL DEFAULT 0 COMMENT '逻辑删除',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 10 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_general_ci COMMENT = '对象存储表' ROW_FORMAT = DYNAMIC;

-- ----------------------------
-- Records of object_store
-- ----------------------------
INSERT INTO `object_store` VALUES (1, '本地上传', 'Project', '', NULL, NULL, '本地', '/static/upload/', 1, 1, 0);

-- ----------------------------
-- Table structure for operate_log
-- ----------------------------
DROP TABLE IF EXISTS `operate_log`;
CREATE TABLE `operate_log`  (
  `id` bigint UNSIGNED NOT NULL AUTO_INCREMENT COMMENT '主键id',
  `operate_url` varchar(128) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL DEFAULT '' COMMENT '操作url',
  `operate_module` varchar(30) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL DEFAULT '' COMMENT '操作模块',
  `operate_type` tinyint NOT NULL DEFAULT -1 COMMENT '操作类型',
  `operate_method` varchar(256) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL DEFAULT '' COMMENT '操作方法全路径',
  `operate_description` varchar(256) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL COMMENT '操作方法描述',
  `request_type` varchar(30) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL DEFAULT '' COMMENT '请求类型',
  `request_params` longtext CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL COMMENT '请求参数',
  `response_data` longtext CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL COMMENT '响应数据',
  `user_id` varchar(64) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL DEFAULT '' COMMENT '用户id',
  `username` varchar(64) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL DEFAULT '' COMMENT '用户昵称',
  `operate_ip_address` varchar(64) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL DEFAULT '' COMMENT '操作ip地址',
  `operate_ip_source` varchar(64) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL DEFAULT '' COMMENT '操作ip来源位置',
  `gmt_create` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  `gmt_update` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP COMMENT '更新时间',
  `is_deleted` tinyint NOT NULL DEFAULT 0 COMMENT '逻辑删除',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 421 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci COMMENT = '操作日志表' ROW_FORMAT = DYNAMIC;

-- ----------------------------
-- Records of operate_log
-- ----------------------------

-- ----------------------------
-- Table structure for role
-- ----------------------------
DROP TABLE IF EXISTS `role`;
CREATE TABLE `role`  (
  `id` varchar(64) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL COMMENT '角色主键id',
  `role_name` varchar(32) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '角色名称',
  `role_label` varchar(32) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL COMMENT '角色标识',
  `role_secret` varchar(32) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '角色秘钥',
  `order_num` int NULL DEFAULT 1,
  `is_disabled` tinyint(1) NOT NULL DEFAULT 0 COMMENT '是否禁用 (0 正常  1禁用)',
  `is_deleted` tinyint(1) NOT NULL DEFAULT 0 COMMENT '逻辑删除（0整除  1删除）',
  `gmt_create` datetime NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  `gmt_update` datetime NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP COMMENT '更新时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci COMMENT = '角色表信息' ROW_FORMAT = DYNAMIC;

-- ----------------------------
-- Records of role
-- ----------------------------
INSERT INTO `role` VALUES ('42c26cfefea24b58a85e8341254ff50b', '管理员', 'admin', NULL, 2, 0, 0, '2022-12-12 07:22:30', '2023-03-08 05:55:24');
INSERT INTO `role` VALUES ('61b7d79cc7c44c398f15b6f666337135', '游客', 'Visitor', NULL, 3, 0, 0, '2022-12-13 14:45:48', '2023-03-08 05:56:47');
INSERT INTO `role` VALUES ('fdec675f47b64f19baf3c662fc4d0c8b', '超级管理员', 'super_admin', NULL, 1, 0, 0, '2022-12-06 07:27:16', '2023-03-08 05:55:38');

-- ----------------------------
-- Table structure for role_half_menu
-- ----------------------------
DROP TABLE IF EXISTS `role_half_menu`;
CREATE TABLE `role_half_menu`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键id',
  `role_id` varchar(64) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL COMMENT '角色id',
  `half_menu_id` bigint NOT NULL COMMENT '半选菜单id',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 29 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_general_ci COMMENT = '角色-菜单 半选关联表' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of role_half_menu
-- ----------------------------
INSERT INTO `role_half_menu` VALUES (28, '61b7d79cc7c44c398f15b6f666337135', 60);

-- ----------------------------
-- Table structure for role_menu
-- ----------------------------
DROP TABLE IF EXISTS `role_menu`;
CREATE TABLE `role_menu`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '关联主键id',
  `role_id` varchar(64) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL COMMENT '角色id',
  `menu_id` bigint NOT NULL COMMENT '菜单id',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 450 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci COMMENT = '角色菜单关联表' ROW_FORMAT = DYNAMIC;

-- ----------------------------
-- Records of role_menu
-- ----------------------------
INSERT INTO `role_menu` VALUES (421, '42c26cfefea24b58a85e8341254ff50b', 64);
INSERT INTO `role_menu` VALUES (422, '42c26cfefea24b58a85e8341254ff50b', 1);
INSERT INTO `role_menu` VALUES (423, '42c26cfefea24b58a85e8341254ff50b', 65);
INSERT INTO `role_menu` VALUES (424, '42c26cfefea24b58a85e8341254ff50b', 66);
INSERT INTO `role_menu` VALUES (425, '42c26cfefea24b58a85e8341254ff50b', 8);
INSERT INTO `role_menu` VALUES (426, '42c26cfefea24b58a85e8341254ff50b', 9);
INSERT INTO `role_menu` VALUES (427, '42c26cfefea24b58a85e8341254ff50b', 41);
INSERT INTO `role_menu` VALUES (428, '42c26cfefea24b58a85e8341254ff50b', 10);
INSERT INTO `role_menu` VALUES (429, '42c26cfefea24b58a85e8341254ff50b', 42);
INSERT INTO `role_menu` VALUES (430, '42c26cfefea24b58a85e8341254ff50b', 60);
INSERT INTO `role_menu` VALUES (431, '42c26cfefea24b58a85e8341254ff50b', 61);
INSERT INTO `role_menu` VALUES (432, '42c26cfefea24b58a85e8341254ff50b', 30);
INSERT INTO `role_menu` VALUES (433, '42c26cfefea24b58a85e8341254ff50b', 62);
INSERT INTO `role_menu` VALUES (434, '42c26cfefea24b58a85e8341254ff50b', 63);
INSERT INTO `role_menu` VALUES (435, '42c26cfefea24b58a85e8341254ff50b', 31);
INSERT INTO `role_menu` VALUES (444, '61b7d79cc7c44c398f15b6f666337135', 64);
INSERT INTO `role_menu` VALUES (445, '61b7d79cc7c44c398f15b6f666337135', 1);
INSERT INTO `role_menu` VALUES (446, '61b7d79cc7c44c398f15b6f666337135', 65);
INSERT INTO `role_menu` VALUES (447, '61b7d79cc7c44c398f15b6f666337135', 66);
INSERT INTO `role_menu` VALUES (448, '61b7d79cc7c44c398f15b6f666337135', 61);
INSERT INTO `role_menu` VALUES (449, '61b7d79cc7c44c398f15b6f666337135', 63);

-- ----------------------------
-- Table structure for user_auth
-- ----------------------------
DROP TABLE IF EXISTS `user_auth`;
CREATE TABLE `user_auth`  (
  `id` varchar(64) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL COMMENT '用户主键',
  `username` varchar(128) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL COMMENT '用户名/OpenId',
  `password` varchar(64) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '用户密码',
  `user_info_id` bigint NOT NULL COMMENT '用户信息id',
  `user_role_id` varchar(64) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL COMMENT '用户角色id',
  `login_type` tinyint(1) NULL DEFAULT 1 COMMENT '用户登录方式（1 用户名  2 邮箱  3 QQ  4 微信）',
  `email_login` tinyint(1) NOT NULL DEFAULT 0 COMMENT '是否开启邮箱登录（0 否  1是）',
  `is_disabled` tinyint(1) NOT NULL DEFAULT 0 COMMENT '是否禁用（0 正常  1禁用）',
  `is_deleted` tinyint(1) NOT NULL DEFAULT 0 COMMENT '逻辑删除（0 正常  1 禁用）',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci COMMENT = '用户权限表' ROW_FORMAT = DYNAMIC;

-- ----------------------------
-- Records of user_auth
-- ----------------------------
INSERT INTO `user_auth` VALUES ('615917e9f275401a894342179d4cd00c', 'test', '$2a$10$wzkIicj0ssgby1lvKDfqDeBWbtry110lslFTQCeaoJQZiFD9st9pu', 5, '61b7d79cc7c44c398f15b6f666337135', 1, 0, 0, 0);
INSERT INTO `user_auth` VALUES ('902fddcf0c45407e9c4caa1fe15e9517', 'user', '$2a$10$jWcSoCH4ov/eOLNpPqAaa.0X7X7Ph8eKVtejTGhNm3P6gaHxMQ0SS', 2, '61b7d79cc7c44c398f15b6f666337135', 1, 0, 0, 0);
INSERT INTO `user_auth` VALUES ('be38d5e78e8f4981bda87507f393ee2f', 'superAdmin', '$2a$10$Zwv4A8AxQlSywYaOBrfoT.XMkFGv8UC95UfAvYeMMawjokbmsNj1K', 1, 'fdec675f47b64f19baf3c662fc4d0c8b', 1, 0, 0, 0);
INSERT INTO `user_auth` VALUES ('f0dbc2c684c742a48c362066cb23463d', 'Admin', '$2a$10$rkWhFZsgedRJho0fG.cBCuPMqfTas/f8em4H2p76XriuRdmp9nyCK', 3, '42c26cfefea24b58a85e8341254ff50b', 1, 0, 0, 0);

-- ----------------------------
-- Table structure for user_info
-- ----------------------------
DROP TABLE IF EXISTS `user_info`;
CREATE TABLE `user_info`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '用户信息主键',
  `nickname` varchar(32) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '用户名',
  `avatar` varchar(1024) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '用户头像',
  `gender` tinyint(1) NOT NULL DEFAULT -1 COMMENT '用户性别（-1 未知  0 仙女  1帅哥）',
  `email` varchar(64) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '用户邮箱',
  `person_intro` varchar(500) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '用户个人简介',
  `device_type` int NOT NULL DEFAULT 1 COMMENT '设备类型（1 PC、2 安卓、3 苹果 ）',
  `registered_source` int NOT NULL DEFAULT 1 COMMENT '注册来源（1 PC网页、2 小程序、3 app）',
  `ip_address` varchar(64) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT 'ip地址',
  `ip_source` varchar(64) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT 'ip来源地',
  `gmt_create` datetime NULL DEFAULT NULL COMMENT '用户创建时间',
  `gmt_update` datetime NULL DEFAULT NULL ON UPDATE CURRENT_TIMESTAMP COMMENT '用户信息更新时间',
  `last_login_time` datetime NULL DEFAULT NULL COMMENT '用户最近一次登录时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 6 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci COMMENT = '用户信息表' ROW_FORMAT = DYNAMIC;

-- ----------------------------
-- Records of user_info
-- ----------------------------
INSERT INTO `user_info` VALUES (1, '我是超级管理员', 'http://192.168.1.251:9999/store/picture/user/avatar/be38d5e78e8f4981bda87507f393ee2f/afc6ff7e1b73b559d7b267e799da3cbe.jpg', 1, '486356410@qq.com', '人生是一段旅程，不在于目的地，而在于沿途的风景和心情的体验。', 1, 1, '127.0.0.1', '本地局域网', '2023-03-14 14:13:16', '2023-05-30 14:27:06', '2023-05-30 09:56:59');
INSERT INTO `user_info` VALUES (2, '我是普通用户', 'http://www.cos.store.nanjustar.top/picture/website/other/6610995d434489a3c77cb5a44802d569.webp', 0, '123456@qq.com', '没有BUG的代码是不完美的！', 1, 1, '127.0.0.1', '本地局域网', '2023-03-14 14:13:16', '2023-05-30 14:27:55', '2023-05-26 10:08:03');
INSERT INTO `user_info` VALUES (3, '我是管理员', 'http://192.168.1.251:9999/store/picture/user/avatar/be38d5e78e8f4981bda87507f393ee2f/e64d0aaeff2d9dcb72b93bb625abd9f0.webp', 1, '486356410@qq.com', '每个人的人生都是一场充满风景的旅程，有美好的瞬间，也有曲折的经历。但只要勇于面对，坚持前行，我们就能在旅途中不断成长，绽放自我。', 1, 1, NULL, NULL, '2023-03-17 14:06:05', '2023-05-30 14:27:41', '2023-05-30 09:54:58');
INSERT INTO `user_info` VALUES (5, '我也是用户', 'http://192.168.1.251:9999/store/picture/user/avatar/be38d5e78e8f4981bda87507f393ee2f/6610995d434489a3c77cb5a44802d569.webp', -1, '123456@qq.com', '我是用户', 1, 1, '192.168.1.251', '本地局域网', '2023-05-29 11:38:52', '2023-05-30 14:28:21', '2023-05-30 10:08:32');

-- ----------------------------
-- Table structure for website_config
-- ----------------------------
DROP TABLE IF EXISTS `website_config`;
CREATE TABLE `website_config`  (
  `id` bigint UNSIGNED NOT NULL AUTO_INCREMENT COMMENT '主键id',
  `website_config` text CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL COMMENT '网站配制信息',
  `website_module` int NOT NULL COMMENT '网站配制模块',
  `gmt_create` datetime NULL DEFAULT CURRENT_TIMESTAMP COMMENT '网站配制创建时间',
  `gmt_update` datetime NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP COMMENT '网站配制更新时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 5 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci COMMENT = '网站配制表' ROW_FORMAT = DYNAMIC;

-- ----------------------------
-- Records of website_config
-- ----------------------------
INSERT INTO `website_config` VALUES (1, '{\"logo\":\"http://127.0.0.1:9999/store/picture/website/format/add4fc842e65d76ba7e2fb913da8a0e5.jpg\",\"websiteName\":\"Pumpkin模板系统\",\"motto\":\"人们痛恨的不是改变,而是被改变。\",\"author\":\"Pumpkin\",\"announcement\":\"到了某一个阶段，生活就会开始给你做减法。拿走你的一些朋友，让你知道谁才是真正的朋友。拿走你的一些梦想，让你认清现实是什么。当你能看着自己忙里忙外，成为自己生活的旁观者，你才能找到自己的节奏。\",\"commentBack\":\"http://127.0.0.1:9999/store/picture/website/format/a06640d1330d90492a3cd01f8aea7f71.jpg\",\"createDate\":\"2023-01-02\",\"copyright\":\"Copyright ©️ 2022 - 2023 by ❤️❤️ Pumpkin\",\"footerWord\":\"❤️❤️I wish you to become your own sun, no need to rely on who\'s light.❤️❤️\",\"caseNumber\":\"豫ICP备*******号\",\"formatLoginType\":[\"QQ\",\"weChat\"]}', 1, '2023-02-21 10:16:32', '2023-11-12 20:09:24');
INSERT INTO `website_config` VALUES (2, '{\"websiteTitle\":\"Pumpkin后台管理\",\"websiteName\":\"Pumpkin模板后台管理系统\",\"websitePoster\":\"要努力呀，为了想要的生活，为了人间烟火，为了今天的风和月！\",\"copyright\":\"Copyright © 2023 by ~ Pumpkin\",\"favicon\":\"https://www.static.nanjustar.top/blog/website/backstage/favicon.ico\",\"logo\":\"http://127.0.0.1:9999/store/picture/website/backstage/a0ffc4a135859d439ce9c5841bb47e85.png\",\"background\":\"http://127.0.0.1:9999/store/picture/website/backstage/d18281b577bf5414ab04f786ff764eec.png\",\"backstageLoginType\":[\"QQ\",\"weChat\"]}', 2, '2023-02-21 10:16:57', '2023-11-12 20:10:29');
INSERT INTO `website_config` VALUES (3, '{\"qqNumber\":\"486356410\",\"showQq\":true,\"weChatNumber\":\"Java0009\",\"showWeChat\":true,\"giteeUrl\":\"https://gitee.com/duan_nan\",\"showGitee\":true,\"githubUrl\":\"https://github.com/duan_nan\",\"showGithub\":true,\"bilibiliUrl\":\"https://space.bilibili.com/452089426?spm_id_from=333.1007.0.0\",\"showBilibili\":true,\"csdnUrl\":\"https://blog.csdn.net/nanshen__?spm=1011.2124.3001.5343\",\"showCsdn\":true,\"groupNumber\":\"729601256\",\"showGroup\":false}', 3, '2023-02-21 10:16:57', '2023-03-09 16:52:13');
INSERT INTO `website_config` VALUES (4, '{\"menuRouteType\":2,\"userAvatar\":\"http://127.0.0.1:9999/store/picture/website/other/6610995d434489a3c77cb5a44802d569.webp\",\"visitorAvatar\":\"http://127.0.0.1:9999/store/picture/website/other/e64d0aaeff2d9dcb72b93bb625abd9f0.webp\",\"uploadType\":\"Project\",\"weChatPay\":\"http://127.0.0.1:9999/store/picture/website/other/6610995d434489a3c77cb5a44802d569.webp\",\"alipayPay\":\"http://127.0.0.1:9999/store/picture/website/other/e64d0aaeff2d9dcb72b93bb625abd9f0.webp\",\"webSocketUrl\":null,\"articleVerify\":1,\"leaveVerify\":1,\"commentVerify\":1,\"emailNotify\":1,\"chatRoomStatus\":0,\"musicStatus\":1}', 4, '2023-02-21 10:16:58', '2023-11-12 20:10:18');

SET FOREIGN_KEY_CHECKS = 1;
