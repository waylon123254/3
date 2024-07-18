/*
 Navicat Premium Data Transfer

 Source Server         : mysql
 Source Server Type    : MySQL
 Source Server Version : 80031 (8.0.31)
 Source Host           : localhost:3306
 Source Schema         : authority

 Target Server Type    : MySQL
 Target Server Version : 80031 (8.0.31)
 File Encoding         : 65001

 Date: 07/04/2024 16:03:10
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for category
-- ----------------------------
DROP TABLE IF EXISTS `category`;
CREATE TABLE `category`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `parent_id` bigint NULL DEFAULT NULL COMMENT '父级id',
  `path` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '路径',
  `level` int NULL DEFAULT NULL COMMENT '等级',
  `name` varchar(50) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '名称',
  `creator` bigint NULL DEFAULT NULL COMMENT '创建人',
  `state` enum('0','1') CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL DEFAULT '1' COMMENT '状态：0/下架 1/上架',
  `create_time` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  `update_time` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP COMMENT '更新时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 3 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci COMMENT = '商品分类' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of category
-- ----------------------------
INSERT INTO `category` VALUES (1, NULL, NULL, NULL, '测试分类', 1, '1', '2024-01-28 00:00:00', '2024-04-07 10:10:58');
INSERT INTO `category` VALUES (2, NULL, NULL, NULL, '测试', 3, '0', '2024-04-07 09:54:00', '2024-04-07 09:54:00');

-- ----------------------------
-- Table structure for job
-- ----------------------------
DROP TABLE IF EXISTS `job`;
CREATE TABLE `job`  (
  `id` int NOT NULL COMMENT '兼职id',
  `title` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '兼职标题',
  `content` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '兼职详细内容',
  `create_time` datetime NULL DEFAULT NULL COMMENT '创建时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci COMMENT = '兼职信息表' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of job
-- ----------------------------

-- ----------------------------
-- Table structure for menu_list
-- ----------------------------
DROP TABLE IF EXISTS `menu_list`;
CREATE TABLE `menu_list`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `parent_id` bigint NULL DEFAULT NULL COMMENT '父级id',
  `name` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '名称',
  `icon` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '菜单图标',
  `priority` int NULL DEFAULT NULL COMMENT '优先级',
  `router` varchar(50) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '路由',
  `state` enum('0','1') CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL DEFAULT '1' COMMENT '状态 1/正常',
  `create_time` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  `update_time` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP COMMENT '更新时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 13 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of menu_list
-- ----------------------------
INSERT INTO `menu_list` VALUES (1, NULL, '用户管理', 'el-icon-user-solid', 1, '', '1', '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `menu_list` VALUES (2, NULL, '分类管理', 'el-icon-star-on', 2, '', '1', '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `menu_list` VALUES (3, NULL, '商品管理', 'el-icon-s-goods', 3, '', '1', '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `menu_list` VALUES (4, NULL, '订单管理', 'el-icon-s-order', 4, '', '1', '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `menu_list` VALUES (5, NULL, '权限管理', 'el-icon-collection-tag', 5, '', '1', '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `menu_list` VALUES (6, NULL, '角色管理', 'el-icon-s-flag', 6, '', '1', '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `menu_list` VALUES (7, 1, '用户列表', '', 7, 'user', '1', '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `menu_list` VALUES (8, 2, '分类列表', '', 8, 'category', '1', '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `menu_list` VALUES (9, 3, '商品列表', '', 9, 'product', '1', '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `menu_list` VALUES (10, 4, '订单列表', '', 10, 'order', '1', '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `menu_list` VALUES (11, 5, '权限列表', '', 11, 'power', '1', '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `menu_list` VALUES (12, 6, '角色列表', '', 12, 'role', '1', '2021-11-28 00:00:00', '2021-11-28 00:00:00');

-- ----------------------------
-- Table structure for order
-- ----------------------------
DROP TABLE IF EXISTS `order`;
CREATE TABLE `order`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `product_id` bigint NULL DEFAULT NULL COMMENT '商品id',
  `creator` bigint NULL DEFAULT NULL COMMENT '创建人',
  `quantity` bigint NULL DEFAULT NULL COMMENT '数量',
  `subject` varchar(50) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '订单标题',
  `address` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '收货地址',
  `out_trade_no` varchar(50) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '商户订单号',
  `total_amount` decimal(10, 2) NULL DEFAULT NULL COMMENT '总金额',
  `state` tinyint NOT NULL DEFAULT 0 COMMENT '状态 0：未支付 1：已支付',
  `create_time` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  `update_time` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP COMMENT '更新时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 2 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '订单' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of order
-- ----------------------------
INSERT INTO `order` VALUES (1, 1, 1, 1, '测试订单', '上海', '1122333', 1.00, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');

-- ----------------------------
-- Table structure for permission
-- ----------------------------
DROP TABLE IF EXISTS `permission`;
CREATE TABLE `permission`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `name` varchar(100) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '权限标识',
  `description` varchar(50) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '权限描述',
  `state` tinyint NOT NULL DEFAULT 1 COMMENT '状态 1/正常',
  `create_time` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  `update_time` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP COMMENT '更新时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 29 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '权限' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of permission
-- ----------------------------
INSERT INTO `permission` VALUES (1, 'user:select', '用户查询', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (2, 'user:update', '用户修改', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (3, 'user:delete', '用户删除', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (4, 'product:delete', '商品删除', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (5, 'product:update', '商品修改', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (6, 'product:add', '商品添加', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (7, 'role:add', '角色添加', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (8, 'role:update', '角色修改', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (9, 'role:delete', '角色删除', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (10, 'role:select', '角色查询', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (11, 'menuList:delete', '菜单删除', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (12, 'menuList:add', '菜单添加', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (13, 'menuList:update', '菜单修改', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (14, 'order:delete', '订单删除', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (15, 'order:update', '订单修改', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (16, 'rolePermission:add', '授权添加', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (17, 'rolePermission:delete', '授权删除', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (18, 'rolePermission:select', '授权查询', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (19, 'permission:select', '权限查询', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (20, 'user:add', '用户添加', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (21, 'product:select', '商品查询', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (22, 'menuList:select', '菜单查询', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (23, 'order:select', '订单查询', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (24, 'order:add', '订单添加', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (25, 'category:select', '分类查询', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (26, 'category:delete', '分类删除', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (27, 'category:update', '分类修改', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `permission` VALUES (28, 'category:add', '分类添加', 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');

-- ----------------------------
-- Table structure for product
-- ----------------------------
DROP TABLE IF EXISTS `product`;
CREATE TABLE `product`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `category_id` bigint NULL DEFAULT NULL COMMENT '分类id',
  `name` varchar(50) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '名称',
  `price` decimal(10, 2) NULL DEFAULT NULL COMMENT '价格',
  `creator` bigint NULL DEFAULT NULL COMMENT '创建人',
  `state` tinyint NOT NULL DEFAULT 1 COMMENT '状态：0/下架 1/上架',
  `create_time` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  `update_time` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP COMMENT '更新时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 3 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '商品' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of product
-- ----------------------------
INSERT INTO `product` VALUES (1, 1, 'iphone x', 5000.00, 1, 0, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `product` VALUES (2, 2, '测试', 2123.00, 3, 0, '2024-04-07 09:55:06', '2024-04-07 09:55:06');

-- ----------------------------
-- Table structure for role
-- ----------------------------
DROP TABLE IF EXISTS `role`;
CREATE TABLE `role`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `name` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '角色名称',
  `parent_id` bigint NULL DEFAULT NULL COMMENT '上级角色',
  `description` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '描述',
  `state` tinyint NOT NULL DEFAULT 1 COMMENT '状态 1:正常0:',
  `create_time` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  `update_time` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP COMMENT '更新时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 3 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci COMMENT = '角色表' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of role
-- ----------------------------
INSERT INTO `role` VALUES (1, 'admin', NULL, '系统管理员', 1, '2024-01-28 00:00:00', '2024-04-07 14:12:48');
INSERT INTO `role` VALUES (2, 'user', 1, '普通用户', 1, '2024-01-28 00:00:00', '2024-04-07 00:00:00');

-- ----------------------------
-- Table structure for role_menu_list
-- ----------------------------
DROP TABLE IF EXISTS `role_menu_list`;
CREATE TABLE `role_menu_list`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `role_id` bigint NULL DEFAULT NULL COMMENT '角色id',
  `menu_list_id` bigint NULL DEFAULT NULL COMMENT '菜单id',
  `state` tinyint NULL DEFAULT 1 COMMENT '状态 1/正常',
  `create_time` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  `update_time` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP COMMENT '更新时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 19 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '角色和菜单关联表' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of role_menu_list
-- ----------------------------
INSERT INTO `role_menu_list` VALUES (1, 1, 1, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_menu_list` VALUES (2, 1, 2, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_menu_list` VALUES (3, 1, 3, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_menu_list` VALUES (4, 1, 4, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_menu_list` VALUES (5, 1, 5, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_menu_list` VALUES (6, 1, 6, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_menu_list` VALUES (7, 1, 7, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_menu_list` VALUES (8, 1, 8, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_menu_list` VALUES (9, 1, 9, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_menu_list` VALUES (10, 1, 10, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_menu_list` VALUES (11, 1, 11, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_menu_list` VALUES (12, 1, 12, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_menu_list` VALUES (13, 2, 2, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_menu_list` VALUES (14, 2, 3, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_menu_list` VALUES (15, 2, 4, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_menu_list` VALUES (16, 2, 8, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_menu_list` VALUES (17, 2, 9, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_menu_list` VALUES (18, 2, 10, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');

-- ----------------------------
-- Table structure for role_permission
-- ----------------------------
DROP TABLE IF EXISTS `role_permission`;
CREATE TABLE `role_permission`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `role_id` bigint NULL DEFAULT NULL COMMENT '角色id',
  `permission_id` bigint NULL DEFAULT NULL COMMENT '权限id',
  `state` tinyint NOT NULL DEFAULT 1 COMMENT '状态 1/正常',
  `create_time` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  `update_time` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP COMMENT '更新时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 42 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '角色权限' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of role_permission
-- ----------------------------
INSERT INTO `role_permission` VALUES (1, 1, 1, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (2, 1, 2, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (3, 1, 3, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (4, 1, 4, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (5, 1, 5, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (6, 1, 6, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (7, 1, 7, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (8, 1, 8, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (9, 1, 9, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (10, 1, 10, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (11, 1, 11, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (12, 1, 12, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (13, 1, 13, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (14, 1, 14, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (15, 1, 15, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (16, 1, 16, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (17, 1, 17, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (18, 1, 18, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (19, 1, 19, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (20, 1, 20, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (21, 1, 21, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (22, 1, 22, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (23, 1, 23, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (24, 1, 24, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (25, 1, 25, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (26, 1, 26, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (27, 1, 27, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (28, 1, 28, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (29, 2, 4, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (30, 2, 5, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (31, 2, 6, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (32, 2, 14, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (33, 2, 15, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (34, 2, 21, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (35, 2, 23, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (36, 2, 24, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (37, 2, 25, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (38, 2, 26, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (39, 2, 27, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (40, 2, 28, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');
INSERT INTO `role_permission` VALUES (41, 2, 22, 1, '2021-11-28 00:00:00', '2021-11-28 00:00:00');

-- ----------------------------
-- Table structure for user
-- ----------------------------
DROP TABLE IF EXISTS `user`;
CREATE TABLE `user`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `username` varchar(50) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '用户名',
  `password` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL COMMENT '密码',
  `parent_id` bigint NOT NULL DEFAULT 1 COMMENT '上级id',
  `role_id` bigint NOT NULL DEFAULT 2 COMMENT '角色id',
  `path` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL DEFAULT '1-' COMMENT '路径',
  `level` int NOT NULL DEFAULT 1 COMMENT '等级',
  `email` varchar(20) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '邮箱',
  `is_active` enum('1','0') CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '是否启用: 1 - 启用, 0 - 禁止',
  `phone` varchar(20) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '联系方式',
  `state` tinyint(1) NOT NULL DEFAULT 1 COMMENT '状态：0/禁止 1/正常',
  `create_time` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  `update_time` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP COMMENT '更新时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 5 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci COMMENT = '用户表' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of user
-- ----------------------------
INSERT INTO `user` VALUES (1, 'admin', 'b2f0c414a5ffb6944c424bc18ae3a8a0', 0, 1, '', 0, 'admin@qq.com', NULL, '1234565', 1, '2021-11-28 00:00:00', '2024-04-07 15:30:28');
INSERT INTO `user` VALUES (2, 'user1', '500637c0d48b442a3be6d4fce12e0910', 1, 2, '1-', 1, 'user1@qq.com', NULL, '123', 1, '2021-11-28 00:00:00', '2024-04-07 15:30:33');
INSERT INTO `user` VALUES (3, 'user2', '500637c0d48b442a3be6d4fce12e0910', 1, 2, '1-', 1, 'user2@qq.com', NULL, '123', 1, '2021-11-28 00:00:00', '2024-04-07 15:30:38');
INSERT INTO `user` VALUES (4, 'user3', 'b2f0c414a5ffb6944c424bc18ae3a8a0', 1, 2, '1-', 1, 'test@outllok.com', NULL, NULL, 1, '2024-04-07 15:42:15', '2024-04-07 15:42:15');

SET FOREIGN_KEY_CHECKS = 1;
