/*
 Navicat Premium Data Transfer

 Source Server         : mysql
 Source Server Type    : MySQL
 Source Server Version : 80035 (8.0.35)
 Source Host           : localhost:3306
 Source Schema         : test

 Target Server Type    : MySQL
 Target Server Version : 80035 (8.0.35)
 File Encoding         : 65001

 Date: 22/05/2024 09:35:03
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for config
-- ----------------------------
DROP TABLE IF EXISTS `config`;
CREATE TABLE `config`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `name` varchar(100) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '配置参数名称',
  `value` varchar(100) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '配置参数值',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 7 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '配置文件' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of config
-- ----------------------------
INSERT INTO `config` VALUES (1, 'picture1', 'http://localhost:8080/ssmzh48x/upload/1714791158774.jpg');
INSERT INTO `config` VALUES (2, 'picture2', 'http://localhost:8080/ssmzh48x/upload/1714791167912.jpg');
INSERT INTO `config` VALUES (3, 'picture3', 'http://localhost:8080/ssmzh48x/upload/1714791181081.jpg');
INSERT INTO `config` VALUES (6, 'homepage', NULL);

-- ----------------------------
-- Table structure for defaultuser
-- ----------------------------
DROP TABLE IF EXISTS `defaultuser`;
CREATE TABLE `defaultuser`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `username` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '用户名',
  `mima` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '密码',
  `name` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '姓名',
  `sex` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '性别',
  `age` int NULL DEFAULT NULL COMMENT '年龄',
  `phone` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '电话',
  `picture` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '照片',
  `email` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '邮箱',
  `addtime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  PRIMARY KEY (`id`) USING BTREE,
  UNIQUE INDEX `username`(`username` ASC) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 87 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '注册用户' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of defaultuser
-- ----------------------------
INSERT INTO `defaultuser` VALUES (81, '用户名1', '123456', '姓名1', '男', 1, '020-89819991', 'http://localhost:8080/ssmzh48x/upload/defaultuser_picture1.jpg', '773890001@qq.com', '2024-05-01 20:25:00');
INSERT INTO `defaultuser` VALUES (82, '用户名2', '123456', '姓名2', '男', 2, '020-89819992', 'http://localhost:8080/ssmzh48x/upload/defaultuser_picture2.jpg', '773890002@qq.com', '2024-05-01 20:25:00');
INSERT INTO `defaultuser` VALUES (83, '用户名3', '123456', '姓名3', '男', 3, '020-89819993', 'http://localhost:8080/ssmzh48x/upload/defaultuser_picture3.jpg', '773890003@qq.com', '2024-05-01 20:25:00');
INSERT INTO `defaultuser` VALUES (84, '用户名4', '123456', '姓名4', '男', 4, '020-89819994', 'http://localhost:8080/ssmzh48x/upload/defaultuser_picture4.jpg', '773890004@qq.com', '2024-05-01 20:25:00');
INSERT INTO `defaultuser` VALUES (85, '用户名5', '123456', '姓名5', '男', 5, '020-89819995', 'http://localhost:8080/ssmzh48x/upload/defaultuser_picture5.jpg', '773890005@qq.com', '2024-05-01 20:25:00');

-- ----------------------------
-- Table structure for discussqiyexinxi
-- ----------------------------
DROP TABLE IF EXISTS `discussqiyexinxi`;
CREATE TABLE `discussqiyexinxi`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `refid` bigint NOT NULL COMMENT '关联表id',
  `userid` bigint NOT NULL COMMENT '用户id',
  `nickname` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '用户名',
  `content` longtext CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '评论内容',
  `reply` longtext CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL COMMENT '回复内容',
  `addtime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 1714730033831 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '企业信息评论表' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of discussqiyexinxi
-- ----------------------------
INSERT INTO `discussqiyexinxi` VALUES (121, 1, 1, '用户名1', '评论内容1', '回复内容1', '2024-05-01 20:25:01');
INSERT INTO `discussqiyexinxi` VALUES (122, 2, 2, '用户名2', '评论内容2', '回复内容2', '2024-05-01 20:25:01');
INSERT INTO `discussqiyexinxi` VALUES (123, 3, 3, '用户名3', '评论内容3', '回复内容3', '2024-05-01 20:25:01');
INSERT INTO `discussqiyexinxi` VALUES (124, 4, 4, '用户名4', '评论内容4', '回复内容4', '2024-05-01 20:25:01');
INSERT INTO `discussqiyexinxi` VALUES (125, 5, 5, '用户名5', '评论内容5', '回复内容5', '2024-05-01 20:25:01');
INSERT INTO `discussqiyexinxi` VALUES (126, 6, 6, '用户名6', '评论内容6', '回复内容6', '2024-05-01 20:25:01');

-- ----------------------------
-- Table structure for discusszhaopinxinxi
-- ----------------------------
DROP TABLE IF EXISTS `discusszhaopinxinxi`;
CREATE TABLE `discusszhaopinxinxi`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `refid` bigint NOT NULL COMMENT '关联表id',
  `userid` bigint NOT NULL COMMENT '用户id',
  `nickname` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '用户名',
  `content` longtext CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '评论内容',
  `reply` longtext CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL COMMENT '回复内容',
  `addtime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 1716101644212 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '招聘信息评论表' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of discusszhaopinxinxi
-- ----------------------------
INSERT INTO `discusszhaopinxinxi` VALUES (131, 1, 1, '用户名1', '评论内容1', '回复内容1', '2024-05-01 20:25:01');
INSERT INTO `discusszhaopinxinxi` VALUES (132, 2, 2, '用户名2', '评论内容2', '回复内容2', '2024-05-01 20:25:01');
INSERT INTO `discusszhaopinxinxi` VALUES (133, 3, 3, '用户名3', '评论内容3', '回复内容3', '2024-05-01 20:25:01');
INSERT INTO `discusszhaopinxinxi` VALUES (134, 4, 4, '用户名4', '评论内容4', '回复内容4', '2024-05-01 20:25:01');
INSERT INTO `discusszhaopinxinxi` VALUES (1715135811498, 1714889661625, 1714889813312, '10214520514', '评论内容', NULL, '2024-05-08 10:36:50');
INSERT INTO `discusszhaopinxinxi` VALUES (1715135994870, 1714889661625, 1714889813312, '10214520514', '好好', '不错', '2024-05-08 10:39:53');
INSERT INTO `discusszhaopinxinxi` VALUES (1715845536709, 1715845192525, 1715845236874, '10214520555', 'xx', NULL, '2024-05-16 15:45:36');
INSERT INTO `discusszhaopinxinxi` VALUES (1715845694859, 1715845192525, 1715845236874, '10214520555', 'xx评价', NULL, '2024-05-16 15:48:14');
INSERT INTO `discusszhaopinxinxi` VALUES (1716101644211, 1716016727927, 1716096826689, '10214520555', '感觉补充', NULL, '2024-05-19 14:54:03');

-- ----------------------------
-- Table structure for jianzhipingjia
-- ----------------------------
DROP TABLE IF EXISTS `jianzhipingjia`;
CREATE TABLE `jianzhipingjia`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `qiyezhanghao` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '企业账号',
  `qiyemingcheng` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '企业名称',
  `gangweimingcheng` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '岗位名称',
  `qiyepingfen` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '企业评分',
  `pingjianeirong` longtext CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL COMMENT '评价内容',
  `pingjiariqi` date NULL DEFAULT NULL COMMENT '评价日期',
  `xuehao` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '学号',
  `xueshengxingming` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '学生姓名',
  `shouji` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '手机',
  `sfsh` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT '否' COMMENT '是否审核',
  `shhf` longtext CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL COMMENT '审核回复',
  `addtime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 1716101580152 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '兼职评价' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of jianzhipingjia
-- ----------------------------
INSERT INTO `jianzhipingjia` VALUES (71, '企业账号1', '企业名称1', '岗位名称1', '1', '评价内容1', '2024-05-01', '学号1', '学生姓名1', '手机1', '是', '', '2024-05-01 20:25:00');
INSERT INTO `jianzhipingjia` VALUES (72, '企业账号2', '企业名称2', '岗位名称2', '1', '评价内容2', '2024-05-01', '学号2', '学生姓名2', '手机2', '是', '', '2024-05-01 20:25:00');
INSERT INTO `jianzhipingjia` VALUES (73, '企业账号3', '企业名称3', '岗位名称3', '1', '评价内容3', '2024-05-01', '学号3', '学生姓名3', '手机3', '是', '', '2024-05-01 20:25:00');
INSERT INTO `jianzhipingjia` VALUES (74, '企业账号4', '企业名称4', '岗位名称4', '1', '评价内容4', '2024-05-01', '学号4', '学生姓名4', '手机4', '是', '', '2024-05-01 20:25:00');
INSERT INTO `jianzhipingjia` VALUES (75, '企业账号5', '企业名称5', '岗位名称5', '1', '评价内容5', '2024-05-01', '学号5', '学生姓名5', '手机5', '是', '', '2024-05-01 20:25:00');
INSERT INTO `jianzhipingjia` VALUES (1716016830481, '我是企业1', '我是企业1', 'xxxx', '5', '这是企业评价', '2024-05-15', '10214520514', 'sfV', '13297035932', '是', '学生评价', '2024-05-18 15:20:30');
INSERT INTO `jianzhipingjia` VALUES (1716101580151, '我是企业1', '我是企业1', 'xxxx', '2', '企业评价内容', '2024-05-21', '10214520514', 'sfV', '13297035932', '否', '', '2024-05-19 14:52:59');

-- ----------------------------
-- Table structure for messages
-- ----------------------------
DROP TABLE IF EXISTS `messages`;
CREATE TABLE `messages`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `userid` bigint NOT NULL COMMENT '留言人id',
  `username` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '用户名',
  `content` longtext CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '留言内容',
  `reply` longtext CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL COMMENT '回复内容',
  `addtime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 1714729716810 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '留言板' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of messages
-- ----------------------------
INSERT INTO `messages` VALUES (1, 1, '用户名1', '留言内容1', '回复内容1', '2024-05-01 20:25:00');
INSERT INTO `messages` VALUES (2, 2, '用户名2', '留言内容2', '回复内容2', '2024-05-01 20:25:01');
INSERT INTO `messages` VALUES (3, 3, '用户名3', '留言内容3', '回复内容3', '2024-05-01 20:25:01');
INSERT INTO `messages` VALUES (4, 4, '用户名4', '留言内容4', '回复内容4', '2024-05-01 20:25:01');
INSERT INTO `messages` VALUES (5, 5, '用户名5', '留言内容5', '回复内容5', '2024-05-01 20:25:01');
INSERT INTO `messages` VALUES (6, 6, '用户名6', '留言内容6', '回复内容6', '2024-05-01 20:25:01');
INSERT INTO `messages` VALUES (1714729716808, 1714889813312, '10214520514', 'xx评价', NULL, '2024-05-08 10:40:40');
INSERT INTO `messages` VALUES (1714729716809, 1715845236874, '10214520555', '这是好好的评价', NULL, '2024-05-16 15:49:51');

-- ----------------------------
-- Table structure for news
-- ----------------------------
DROP TABLE IF EXISTS `news`;
CREATE TABLE `news`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `title` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '标题',
  `introduction` longtext CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL COMMENT '简介',
  `picture` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '图片',
  `content` longtext CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '内容',
  `addtime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 107 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci COMMENT = '兼职资讯表' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of news
-- ----------------------------
INSERT INTO `news` VALUES (1, '标题1', '简介1', 'http://localhost:8080/ssmzh48x/upload/news_picture1.jpg', '内容1', '2024-05-01 20:25:00');
INSERT INTO `news` VALUES (2, '标题2', '简介2', 'http://localhost:8080/ssmzh48x/upload/news_picture2.jpg', '内容2', '2024-05-01 20:25:00');
INSERT INTO `news` VALUES (3, '标题3', '简介3', 'http://localhost:8080/ssmzh48x/upload/news_picture3.jpg', '内容3', '2024-05-01 20:25:00');
INSERT INTO `news` VALUES (4, '标题4', '简介4', 'http://localhost:8080/ssmzh48x/upload/news_picture4.jpg', '内容4', '2024-05-01 20:25:00');
INSERT INTO `news` VALUES (5, '标题5', '简介5', 'http://localhost:8080/ssmzh48x/upload/news_picture5.jpg', '内容5', '2024-05-01 20:25:00');
INSERT INTO `news` VALUES (6, '标题6', '简介6', 'http://localhost:8080/ssmzh48x/upload/news_picture6.jpg', '内容6', '2024-05-01 20:25:00');

-- ----------------------------
-- Table structure for qiye
-- ----------------------------
DROP TABLE IF EXISTS `qiye`;
CREATE TABLE `qiye`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `qiyezhanghao` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '企业账号',
  `mima` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '密码',
  `qiyemingcheng` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '企业名称',
  `touxiang` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '头像',
  `lianxiren` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '联系人',
  `lianxidianhua` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '联系电话',
  `qiyeyouxiang` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '企业邮箱',
  `qiyedizhi` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '企业地址',
  `addtime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  PRIMARY KEY (`id`) USING BTREE,
  UNIQUE INDEX `qiyezhanghao`(`qiyezhanghao` ASC) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 1716016593927 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '企业' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of qiye
-- ----------------------------
INSERT INTO `qiye` VALUES (31, '企业1', '123456', '企业名称1', 'http://localhost:8080/ssmzh48x/upload/qiye_touxiang1.jpg', '联系人1', '13823888881', '773890001@qq.com', '企业地址1', '2024-05-01 20:25:00');
INSERT INTO `qiye` VALUES (32, '企业2', '123456', '企业名称2', 'http://localhost:8080/ssmzh48x/upload/qiye_touxiang2.jpg', '联系人2', '13823888882', '773890002@qq.com', '企业地址2', '2024-05-01 20:25:00');
INSERT INTO `qiye` VALUES (33, '企业3', '123456', '企业名称3', 'http://localhost:8080/ssmzh48x/upload/qiye_touxiang3.jpg', '联系人3', '13823888883', '773890003@qq.com', '企业地址3', '2024-05-01 20:25:01');
INSERT INTO `qiye` VALUES (1715954948580, '我是企业', 'dydy521521', '企业', NULL, 'xx', '13297035903', 'sdfv@xx.com', 'xx', '2024-05-17 22:09:09');
INSERT INTO `qiye` VALUES (1716016593925, '我是企业1', 'dydy521521', '我是企业1', NULL, '我是企业1', '13297035932', 'vdcdv@qq.com', 'xx', '2024-05-18 15:16:34');
INSERT INTO `qiye` VALUES (1716016593926, '测试企业账号', 'dydy521521', '测试企业', NULL, NULL, '13299934027', 'xx@xx.com', 'xxx', '2024-05-19 08:39:21');

-- ----------------------------
-- Table structure for qiyexinxi
-- ----------------------------
DROP TABLE IF EXISTS `qiyexinxi`;
CREATE TABLE `qiyexinxi`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `addtime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  `qiyezhanghao` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '企业账号',
  `qiyemingcheng` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '企业名称',
  `qiyeleixing` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '企业类型',
  `tupian` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '图片',
  `yuangongrenshu` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '员工人数',
  `lianxiren` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '联系人',
  `lianxidianhua` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '联系电话',
  `qiyeyouxiang` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '企业邮箱',
  `qiyejieshao` longtext CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL COMMENT '企业介绍',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 1715845163173 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '企业信息' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of qiyexinxi
-- ----------------------------
INSERT INTO `qiyexinxi` VALUES (41, '2024-05-01 20:25:00', '企业账号1', '企业名称1', '国有企业', 'http://localhost:8080/ssmzh48x/upload/qiyexinxi_tupian1.jpg', '20人以下', '联系人1', '联系电话1', '企业邮箱1', '企业介绍1');
INSERT INTO `qiyexinxi` VALUES (42, '2024-05-01 20:25:00', '企业账号2', '企业名称2', '国有企业', 'http://localhost:8080/ssmzh48x/upload/qiyexinxi_tupian2.jpg', '20人以下', '联系人2', '联系电话2', '企业邮箱2', '企业介绍2');
INSERT INTO `qiyexinxi` VALUES (43, '2024-05-01 20:25:00', '企业账号3', '企业名称3', '国有企业', 'http://localhost:8080/ssmzh48x/upload/qiyexinxi_tupian3.jpg', '20人以下', '联系人3', '联系电话3', '企业邮箱3', '企业介绍3');
INSERT INTO `qiyexinxi` VALUES (44, '2024-05-05 20:25:00', '企业账号4', '企业名称4', '国有企业', 'http://localhost:8080/ssmzh48x/upload/qiyexinxi_tupian4.jpg', '20人以下', '联系人4', '联系电话4', '企业邮箱4', '企业介绍4');
INSERT INTO `qiyexinxi` VALUES (45, '2024-05-01 20:25:00', '企业账号5', '企业名称5', '国有企业', 'http://localhost:8080/ssmzh48x/upload/qiyexinxi_tupian5.jpg', '20人以下', '联系人5', '联系电话5', '企业邮箱5', '企业介绍5');
INSERT INTO `qiyexinxi` VALUES (46, '2024-05-01 20:25:00', '企业账号6', '企业名称6', '国有企业', 'http://localhost:8080/ssmzh48x/upload/qiyexinxi_tupian6.jpg', '20人以下', '联系人6', '联系电话6', '企业邮箱6', '企业介绍6');
INSERT INTO `qiyexinxi` VALUES (1714831847911, '2024-05-04 22:10:47', '测试企业账号', '测试企业', '私营企业', 'http://localhost:8080/ssmzh48x/upload/1716089064766.jpg', '20-150人', '测试联系人', '13297035931', 'xx@xx.com', '');
INSERT INTO `qiyexinxi` VALUES (1715845163172, '2024-05-16 15:39:22', '好好企业账号', '好好企业', '私营企业', 'http://localhost:8080/ssmzh48x/upload/1715845154533.jpg', '150-500人', '好好', '13297035932', 'xx@xx.com', '<p>好好</p>');

-- ----------------------------
-- Table structure for storeup
-- ----------------------------
DROP TABLE IF EXISTS `storeup`;
CREATE TABLE `storeup`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `addtime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  `userid` bigint NOT NULL COMMENT '用户id',
  `refid` bigint NULL DEFAULT NULL COMMENT '收藏id',
  `tablename` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '表名',
  `name` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '收藏名称',
  `picture` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '收藏图片',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 1716101625959 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '收藏表' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of storeup
-- ----------------------------
INSERT INTO `storeup` VALUES (1716101474391, '2024-05-19 14:51:13', 1715955046426, 1716016727927, 'zhaopinxinxi', 'xxxx', 'http://localhost:8080/ssmzh48x/upload/1716016712064.jpg');
INSERT INTO `storeup` VALUES (1716101625958, '2024-05-19 14:53:44', 1716096826689, 1716016727927, 'zhaopinxinxi', 'xxxx', 'http://localhost:8080/ssmzh48x/upload/1716016712064.jpg');

-- ----------------------------
-- Table structure for token
-- ----------------------------
DROP TABLE IF EXISTS `token`;
CREATE TABLE `token`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `userid` bigint NOT NULL COMMENT '用户id',
  `username` varchar(100) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '用户名',
  `tablename` varchar(100) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '表名',
  `role` varchar(100) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '角色',
  `token` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '密码',
  `addtime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '新增时间',
  `expiratedtime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '过期时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 15 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = 'token表' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of token
-- ----------------------------
INSERT INTO `token` VALUES (3, 1, 'admin', 'users', '管理员', 'rj1zox450vhig7y9t1eqvvbmh8dp0th3', '2024-05-04 09:16:51', '2024-05-19 15:58:29');
INSERT INTO `token` VALUES (4, 1714831784419, '测试企业账号', 'qiye', '企业', 'waac8kh51a0zmljhz9rq7lu9vn7n66t2', '2024-05-04 22:10:11', '2024-05-15 15:59:19');
INSERT INTO `token` VALUES (5, 1714889813312, '10214520514', 'xuesheng', '学生', 'gjteh94o4cf54cf55az1v0yysv9lorp2', '2024-05-05 14:17:16', '2024-05-15 16:00:34');
INSERT INTO `token` VALUES (6, 1715038529306, '10214520515', 'xuesheng', '学生', '87yqjq69677a8k3bagra24y1o34r635j', '2024-05-07 07:35:42', '2024-05-07 08:35:43');
INSERT INTO `token` VALUES (7, 31, '企业1', 'qiye', '企业', '61zmieb0tuddsr7javzz6xkntgf15u84', '2024-05-12 14:43:33', '2024-05-12 15:43:33');
INSERT INTO `token` VALUES (8, 1715844976515, '好好企业账号', 'qiye', '企业', 'ufiokg0m5u6s17dzdv6pm6cu2ny3nhlv', '2024-05-16 15:36:29', '2024-05-16 16:46:11');
INSERT INTO `token` VALUES (9, 1715845236874, '10214520555', 'xuesheng', '学生', '6km7afsq6vk2rqgkg993jwhr7f76tnpc', '2024-05-16 15:40:46', '2024-05-16 17:00:01');
INSERT INTO `token` VALUES (10, 1715954948580, '我是企业', 'qiye', '企业', 'maylnfubxl3zuhaad6ub69vvcjeq95qb', '2024-05-17 22:09:18', '2024-05-17 23:12:59');
INSERT INTO `token` VALUES (11, 1715955046426, '10214520514', 'xuesheng', '学生', 'ltsyj6oaiznyduv227szvwcdw6jvjxcl', '2024-05-17 22:10:52', '2024-05-19 15:50:57');
INSERT INTO `token` VALUES (12, 1716016593925, '我是企业1', 'qiye', '企业', 'm54nw94ll1l01i6a2ffxj5kwp4ufdwcz', '2024-05-18 15:16:49', '2024-05-19 15:51:55');
INSERT INTO `token` VALUES (13, 1716016593926, '测试企业账号', 'qiye', '企业', '6oknhikc9lx1ghil8lcgxdd6u7iu8n3n', '2024-05-19 08:39:24', '2024-05-19 15:34:17');
INSERT INTO `token` VALUES (14, 1716096826689, '10214520555', 'xuesheng', '学生', 'z67isbiwll58oewpaoabbjthrzqkig4l', '2024-05-19 14:06:45', '2024-05-19 15:53:36');

-- ----------------------------
-- Table structure for users
-- ----------------------------
DROP TABLE IF EXISTS `users`;
CREATE TABLE `users`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `username` varchar(100) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '用户名',
  `password` varchar(100) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '密码',
  `role` varchar(100) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT '管理员' COMMENT '角色',
  `addtime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '新增时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 2 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '用户表' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of users
-- ----------------------------
INSERT INTO `users` VALUES (1, 'admin', 'admin', '管理员', '2024-05-01 20:25:01');

-- ----------------------------
-- Table structure for xuesheng
-- ----------------------------
DROP TABLE IF EXISTS `xuesheng`;
CREATE TABLE `xuesheng`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `addtime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  `xuehao` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '学号',
  `mima` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '密码',
  `xueshengxingming` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '学生姓名',
  `xingbie` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '性别',
  `touxiang` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '头像',
  `xuexiao` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '学校',
  `zhuanye` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '专业',
  `shouji` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '手机',
  `youxiang` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '邮箱',
  PRIMARY KEY (`id`) USING BTREE,
  UNIQUE INDEX `xuehao`(`xuehao` ASC) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 1716096826690 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '学生' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of xuesheng
-- ----------------------------
INSERT INTO `xuesheng` VALUES (11, '2024-05-01 20:25:00', '学生1', '123456', '学生姓名1', '男', 'http://localhost:8080/ssmzh48x/upload/xuesheng_touxiang1.jpg', '学校1', '专业1', '13823888881', '773890001@qq.com');
INSERT INTO `xuesheng` VALUES (12, '2024-05-01 20:25:00', '学生2', '123456', '学生姓名2', '男', 'http://localhost:8080/ssmzh48x/upload/xuesheng_touxiang2.jpg', '学校2', '专业2', '13823888882', '773890002@qq.com');
INSERT INTO `xuesheng` VALUES (13, '2024-05-01 20:25:00', '学生3', '123456', '学生姓名3', '男', 'http://localhost:8080/ssmzh48x/upload/xuesheng_touxiang3.jpg', '学校3', '专业3', '13823888883', '773890003@qq.com');
INSERT INTO `xuesheng` VALUES (14, '2024-05-01 20:25:00', '学生4', '123456', '学生姓名4', '男', 'http://localhost:8080/ssmzh48x/upload/xuesheng_touxiang4.jpg', '学校4', '专业4', '13823888884', '773890004@qq.com');
INSERT INTO `xuesheng` VALUES (15, '2024-05-01 20:25:00', '学生5', '123456', '学生姓名5', '男', 'http://localhost:8080/ssmzh48x/upload/xuesheng_touxiang5.jpg', '学校5', '专业5', '13823888885', '773890005@qq.com');
INSERT INTO `xuesheng` VALUES (1715955046426, '2024-05-17 22:10:46', '10214520514', 'dydy521521', 'sfV', NULL, NULL, 'dvsfd', 'sfdsvdsff', '13297035932', 'dsf@xx.com');
INSERT INTO `xuesheng` VALUES (1716096826689, '2024-05-19 13:33:46', '10214520555', 'dydy521521', '测试姓名', NULL, NULL, '测试学校', '测试专业', '13297035932', '2192327406@qq.com');

-- ----------------------------
-- Table structure for xueshengjianli
-- ----------------------------
DROP TABLE IF EXISTS `xueshengjianli`;
CREATE TABLE `xueshengjianli`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `addtime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  `xuehao` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '学号',
  `xueshengxingming` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '学生姓名',
  `xingbie` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '性别',
  `shouji` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '手机',
  `youxiang` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '邮箱',
  `xuexiao` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '学校',
  `zhuanye` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '专业',
  `suohuojiangxiang` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '所获奖项',
  `suohuojineng` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '所获技能',
  `xuexiaojingli` longtext CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL COMMENT '学校经历',
  `shehuishijian` longtext CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL COMMENT '社会实践',
  `ziwopingjia` longtext CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL COMMENT '自我评价',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 1715038609858 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '学生简历' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of xueshengjianli
-- ----------------------------
INSERT INTO `xueshengjianli` VALUES (21, '2024-05-01 00:00:00', '学号1', '学生姓名1', '性别1', '手机1', '邮箱1', '学校1', '专业1', '所获奖项1', '所获技能1', '学校经历1', '社会实践1', '自我评价1');
INSERT INTO `xueshengjianli` VALUES (22, '2024-05-01 00:00:00', '学号2', '学生姓名2', '性别2', '手机2', '邮箱2', '学校2', '专业2', '所获奖项2', '所获技能2', '学校经历2', '社会实践2', '自我评价2');
INSERT INTO `xueshengjianli` VALUES (23, '2024-05-01 00:00:00', '学号3', '学生姓名3', '性别3', '手机3', '邮箱3', '学校3', '专业3', '所获奖项3', '所获技能3', '学校经历3', '社会实践3', '自我评价3');
INSERT INTO `xueshengjianli` VALUES (24, '2024-05-01 00:00:00', '学号4', '学生姓名4', '性别4', '手机4', '邮箱4', '学校4', '专业4', '所获奖项4', '所获技能4', '学校经历4', '社会实践4', '自我评价4');
INSERT INTO `xueshengjianli` VALUES (25, '2024-05-01 00:00:00', '学号5', '学生姓名5', '性别5', '手机5', '邮箱5', '学校5', '专业5', '所获奖项5', '所获技能5', '学校经历5', '社会实践5', '自我评价5');
INSERT INTO `xueshengjianli` VALUES (1714895530612, '2024-05-01 00:00:00', '10214520514', 'xxx', '男', '13297035933', 'xx@xx.com', 'xx学校', 'xx专业', 'xx', 'xx', 'xx', 'xx', 'xx\n');
INSERT INTO `xueshengjianli` VALUES (1715038609857, '2024-05-07 07:36:49', '10214520515', 'xx', '男', '13297035932', 'xx@xx.com', 'xx', 'xx', 'xx', 'xx', 'xx', 'xx', 'xx');

-- ----------------------------
-- Table structure for xueshengyingpin
-- ----------------------------
DROP TABLE IF EXISTS `xueshengyingpin`;
CREATE TABLE `xueshengyingpin`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `qiyezhanghao` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '企业账号',
  `qiyemingcheng` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '企业名称',
  `gangweimingcheng` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '岗位名称',
  `gongzuoneirong` longtext CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL COMMENT '工作内容',
  `gongzuodidian` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '工作地点',
  `gongzuoshijian` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '工作时间',
  `gangweigongzi` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '岗位工资',
  `shenqingriqi` date NULL DEFAULT NULL COMMENT '申请日期',
  `gerenjianli` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '个人简历',
  `xuehao` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '学号',
  `xueshengxingming` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '学生姓名',
  `shouji` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '手机',
  `sfsh` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT '否' COMMENT '是否审核',
  `shhf` longtext CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL COMMENT '审核回复',
  `addtime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 1716101495175 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '学生应聘' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of xueshengyingpin
-- ----------------------------
INSERT INTO `xueshengyingpin` VALUES (61, '企业账号1', '企业名称1', '岗位名称1', '工作内容1', '工作地点1', '工作时间1', '岗位工资1', '2021-03-22', '', '学号1', '学生姓名1', '手机1', '是', '', '2024-05-01 00:00:00');
INSERT INTO `xueshengyingpin` VALUES (62, '企业账号2', '企业名称2', '岗位名称2', '工作内容2', '工作地点2', '工作时间2', '岗位工资2', '2021-03-22', '', '学号2', '学生姓名2', '手机2', '是', '', '2024-05-01 00:00:00');
INSERT INTO `xueshengyingpin` VALUES (63, '企业账号3', '企业名称3', '岗位名称3', '工作内容3', '工作地点3', '工作时间3', '岗位工资3', '2021-03-22', '', '学号3', '学生姓名3', '手机3', '是', '', '2024-05-01 00:00:00');
INSERT INTO `xueshengyingpin` VALUES (64, '企业账号4', '企业名称4', '岗位名称4', '工作内容4', '工作地点4', '工作时间4', '岗位工资4', '2021-03-22', '', '学号4', '学生姓名4', '手机4', '是', '', '2024-05-01 00:00:00');
INSERT INTO `xueshengyingpin` VALUES (1715135756281, '测试企业账号', '测试企业', '测试岗位', NULL, 'x', 'xx', 'xxx', '2024-05-01', '', '10214520514', 'xxx', '13297035933', '是', 'xx', '2024-05-08 10:35:55');
INSERT INTO `xueshengyingpin` VALUES (1715845526935, '好好企业账号', '好好企业', 'xx', NULL, 'zz', 'xx', '100', NULL, 'http://localhost:8080/ssmzh48x/upload/1715845522051.pdf', '10214520555', 'xx', '13297035934', '是', '审核通过', '2024-05-16 15:45:26');
INSERT INTO `xueshengyingpin` VALUES (1715955085096, '好好企业账号', '好好企业', 'xx', NULL, 'zz', 'xx', '100', '2024-05-03', 'http://localhost:8080/ssmzh48x/upload/1715955082835.jpeg', '10214520514', 'sfV', '13297035932', '否', NULL, '2024-05-17 22:11:24');
INSERT INTO `xueshengyingpin` VALUES (1716016758853, '我是企业1', '我是企业1', 'xxxx', NULL, 'xx', '3', '300', '2024-05-10', '', '10214520514', 'sfV', '13297035932', '是', '好好', '2024-05-18 15:19:18');
INSERT INTO `xueshengyingpin` VALUES (1716101495174, '我是企业1', '我是企业1', 'xxxx', NULL, 'xx', '3', '300', '2024-05-19', 'http://localhost:8080/ssmzh48x/upload/1716101492819.pdf', '10214520514', 'sfV', '13297035932', '是', '评论', '2024-05-19 14:51:34');

-- ----------------------------
-- Table structure for zhaopinxinxi
-- ----------------------------
DROP TABLE IF EXISTS `zhaopinxinxi`;
CREATE TABLE `zhaopinxinxi`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT '主键',
  `qiyezhanghao` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '企业账号',
  `qiyemingcheng` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '企业名称',
  `lianxiren` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '联系人',
  `lianxidianhua` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '联系电话',
  `qiyeyouxiang` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '企业邮箱',
  `gangweimingcheng` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '岗位名称',
  `tupian` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '图片',
  `zhaopinrenshu` int NULL DEFAULT NULL COMMENT '招聘人数',
  `gongzuoneirong` longtext CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL COMMENT '工作内容',
  `gongzuodidian` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '工作地点',
  `gongzuoshijian` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '工作时间',
  `gangweigongzi` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '岗位工资',
  `jiesuanfangshi` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '结算方式',
  `clicktime` datetime NULL DEFAULT NULL COMMENT '最近点击时间',
  `clicknum` int NULL DEFAULT 0 COMMENT '点击次数',
  `addtime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 1716016727928 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '招聘信息' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of zhaopinxinxi
-- ----------------------------
INSERT INTO `zhaopinxinxi` VALUES (51, '企业账号1', '企业名称1', '联系人1', '联系电话1', '企业邮箱1', '岗位名称1', 'http://localhost:8080/ssmzh48x/upload/1715496345216.jpg', 1, '工作内容1', '工作地点1', '工作时间1', '岗位工资1', '日结', '2024-05-12 14:44:06', 2, '2024-05-01 20:25:00');
INSERT INTO `zhaopinxinxi` VALUES (52, '企业账号2', '企业名称2', '联系人2', '联系电话2', '企业邮箱2', '岗位名称2', 'http://localhost:8080/ssmzh48x/upload/1715496358468.jpg', 2, '工作内容2', '工作地点2', '工作时间2', '岗位工资2', '日结', '2024-05-12 14:45:51', 3, '2024-05-01 20:25:00');
INSERT INTO `zhaopinxinxi` VALUES (53, '企业账号3', '企业名称3', '联系人3', '联系电话3', '企业邮箱3', '岗位名称3', 'http://localhost:8080/ssmzh48x/upload/1715496373322.jpg', 3, '工作内容3', '工作地点3', '工作时间3', '岗位工资3', '日结', '2024-05-12 14:46:04', 4, '2024-05-01 20:25:00');
INSERT INTO `zhaopinxinxi` VALUES (1714889661625, '测试企业账号', '测试企业', '测试联系人', '13297035931', 'xx@xx.com', '测试岗位', 'http://localhost:8080/ssmzh48x/upload/1714889615718.jpg', 1, 'xxx', 'x', 'xx', 'xxx', '月结', '2024-05-09 09:27:20', 13, '2024-05-05 14:14:20');
INSERT INTO `zhaopinxinxi` VALUES (1715845192525, '好好企业账号', '好好企业', '好好', '13297035932', 'xx@xx.com', 'xx', 'http://localhost:8080/ssmzh48x/upload/1715845174157.jpg', 3, 'xxx', 'zz', 'xx', '100', '日结', '2024-05-18 15:14:45', 12, '2024-05-16 15:39:52');
INSERT INTO `zhaopinxinxi` VALUES (1715955001932, '我是企业', '企业', 'xx', '13297035903', 'sdfv@xx.com', 'xx', 'http://localhost:8080/ssmzh48x/upload/1715954999874.jpg', 4, 'xx', 'xx', '11', 'xx', '周结', '2024-05-17 22:13:25', 1, '2024-05-17 22:10:01');
INSERT INTO `zhaopinxinxi` VALUES (1716016727927, '我是企业1', '我是企业1', '我是企业1', '13297035932', 'vdcdv@qq.com', 'xxxx', 'http://localhost:8080/ssmzh48x/upload/1716016712064.jpg', 3, 'xx', 'xx', '3', '300', '周结', '2024-05-19 14:53:47', 8, '2024-05-18 15:18:47');

SET FOREIGN_KEY_CHECKS = 1;
