/*
 Navicat Premium Data Transfer

 Source Server         : mysql
 Source Server Type    : MySQL
 Source Server Version : 80035 (8.0.35)
 Source Host           : localhost:3306
 Source Schema         : test_sql

 Target Server Type    : MySQL
 Target Server Version : 80035 (8.0.35)
 File Encoding         : 65001

 Date: 09/07/2024 15:00:25
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for course
-- ----------------------------
DROP TABLE IF EXISTS `course`;
CREATE TABLE `course`  (
  `courseId` varchar(32) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '课程id',
  `courseName` varchar(32) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '课程名称',
  `courseCredit` varchar(32) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '课程学分',
  PRIMARY KEY (`courseId`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '课程信息表' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of course
-- ----------------------------

-- ----------------------------
-- Table structure for employee
-- ----------------------------
DROP TABLE IF EXISTS `employee`;
CREATE TABLE `employee`  (
  `ID` int NOT NULL AUTO_INCREMENT,
  `NAME` char(30) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL,
  `SEX` char(2) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL,
  `AGE` int NOT NULL,
  `DEPARTMENT` char(10) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL,
  `SALARY` int NOT NULL,
  `HOME` char(30) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `MARRY` char(2) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL DEFAULT '否',
  `HOBBY` char(30) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  PRIMARY KEY (`ID`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 8 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of employee
-- ----------------------------
INSERT INTO `employee` VALUES (1, '李红', '女', 20, '人事资源部', 7000, '浙江', '否', '网球');
INSERT INTO `employee` VALUES (2, '姜文', '女', 21, '人事资源部', 9000, '北京', '是', '看书');
INSERT INTO `employee` VALUES (3, '李楠', '男', 22, '产品研发部', 8000, '上海', '否', '音乐');
INSERT INTO `employee` VALUES (4, '潇潇', '女', 23, '产品研发部', 9000, '重庆', '否', '游泳');
INSERT INTO `employee` VALUES (5, '王亮', '女', 24, '产品研发部', 9000, '四川', '是', '足球');
INSERT INTO `employee` VALUES (6, '程默', '男', 25, '业务销售部', 8500, '福建', '否', '游戏');
INSERT INTO `employee` VALUES (7, '陆明', '男', 26, '业务销售部', 10000, '山西', '否', '篮球');

-- ----------------------------
-- Table structure for employee_detail
-- ----------------------------
DROP TABLE IF EXISTS `employee_detail`;
CREATE TABLE `employee_detail`  (
  `ID` int NOT NULL,
  `POS` char(10) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL,
  `EXPERENCE` char(10) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL,
  PRIMARY KEY (`ID`) USING BTREE,
  CONSTRAINT `FK_ID` FOREIGN KEY (`ID`) REFERENCES `employee` (`ID`) ON DELETE RESTRICT ON UPDATE RESTRICT
) ENGINE = InnoDB CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of employee_detail
-- ----------------------------
INSERT INTO `employee_detail` VALUES (1, '人事管理', '工作二年');
INSERT INTO `employee_detail` VALUES (2, '人事招聘', '工作二年');
INSERT INTO `employee_detail` VALUES (3, '初级工程师', '工作一年');
INSERT INTO `employee_detail` VALUES (4, '中级工程师', '工作二年');

-- ----------------------------
-- Table structure for employees
-- ----------------------------
DROP TABLE IF EXISTS `employees`;
CREATE TABLE `employees`  (
  `id` int NOT NULL AUTO_INCREMENT,
  `name` varchar(24) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL DEFAULT '' COMMENT '姓名',
  `age` int NOT NULL DEFAULT 0 COMMENT '年龄',
  `position` varchar(20) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL DEFAULT '' COMMENT '职位',
  `hire_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP COMMENT '入职时间',
  `remark` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '备注',
  PRIMARY KEY (`id`) USING BTREE,
  INDEX `idx_name_age_position`(`name` ASC, `age` ASC, `position` ASC) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 114 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '员工记录表' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of employees
-- ----------------------------
INSERT INTO `employees` VALUES (1, '张三', 30, '工程师', '2024-06-29 16:45:10', '擅长编程');
INSERT INTO `employees` VALUES (2, '李四', 25, '设计师', '2024-06-29 16:45:10', '有创意思维');
INSERT INTO `employees` VALUES (3, '王五', 35, '项目经理', '2024-06-29 16:45:10', '管理能力强');
INSERT INTO `employees` VALUES (4, 'Alice', 28, 'Software Developer', '2024-06-29 16:45:35', 'Proficient in Java');
INSERT INTO `employees` VALUES (5, 'Bob', 34, 'Product Manager', '2024-06-29 16:45:35', 'Experienced in project coordination');
INSERT INTO `employees` VALUES (6, 'Charlie', 45, 'Senior Engineer', '2024-06-29 16:45:35', 'Expert in system architecture');
INSERT INTO `employees` VALUES (7, 'David', 22, 'Junior Designer', '2024-06-29 16:45:35', 'Skilled in UI/UX design');
INSERT INTO `employees` VALUES (8, 'Eve', 31, 'Marketing Specialist', '2024-06-29 16:45:35', 'Strong in market analysis');
INSERT INTO `employees` VALUES (9, 'Alice', 28, 'Software Developer', '2024-06-29 16:45:35', 'Proficient in Java');
INSERT INTO `employees` VALUES (10, 'Bob', 34, 'Product Manager', '2024-06-29 16:45:35', 'Experienced in project coordination');
INSERT INTO `employees` VALUES (11, 'Charlie', 45, 'Senior Engineer', '2024-06-29 16:45:35', 'Expert in system architecture');
INSERT INTO `employees` VALUES (12, 'David', 22, 'Junior Designer', '2024-06-29 16:45:35', 'Skilled in UI/UX design');
INSERT INTO `employees` VALUES (13, 'Eve', 31, 'Marketing Specialist', '2024-06-29 16:45:35', 'Strong in market analysis');
INSERT INTO `employees` VALUES (14, 'Employee1', 20, 'Developer', '2024-06-29 17:10:56', NULL);
INSERT INTO `employees` VALUES (15, 'Employee2', 47, 'Manager', '2024-06-29 17:10:56', NULL);
INSERT INTO `employees` VALUES (16, 'Employee3', 45, 'Intern', '2024-06-29 17:10:56', NULL);
INSERT INTO `employees` VALUES (17, 'Employee4', 62, 'Developer', '2024-06-29 17:10:56', NULL);
INSERT INTO `employees` VALUES (18, 'Employee5', 45, 'Intern', '2024-06-29 17:10:56', NULL);
INSERT INTO `employees` VALUES (19, 'Employee6', 25, 'Developer', '2024-06-29 17:10:56', NULL);
INSERT INTO `employees` VALUES (20, 'Employee7', 49, 'Intern', '2024-06-29 17:10:56', NULL);
INSERT INTO `employees` VALUES (21, 'Employee8', 24, 'Manager', '2024-06-29 17:10:56', NULL);
INSERT INTO `employees` VALUES (22, 'Employee9', 32, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (23, 'Employee10', 28, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (24, 'Employee11', 59, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (25, 'Employee12', 42, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (26, 'Employee13', 47, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (27, 'Employee14', 36, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (28, 'Employee15', 33, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (29, 'Employee16', 31, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (30, 'Employee17', 21, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (31, 'Employee18', 39, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (32, 'Employee19', 29, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (33, 'Employee20', 65, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (34, 'Employee21', 51, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (35, 'Employee22', 60, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (36, 'Employee23', 63, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (37, 'Employee24', 33, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (38, 'Employee25', 37, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (39, 'Employee26', 31, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (40, 'Employee27', 25, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (41, 'Employee28', 28, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (42, 'Employee29', 24, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (43, 'Employee30', 27, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (44, 'Employee31', 27, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (45, 'Employee32', 39, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (46, 'Employee33', 69, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (47, 'Employee34', 44, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (48, 'Employee35', 36, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (49, 'Employee36', 66, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (50, 'Employee37', 52, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (51, 'Employee38', 20, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (52, 'Employee39', 39, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (53, 'Employee40', 36, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (54, 'Employee41', 49, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (55, 'Employee42', 34, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (56, 'Employee43', 28, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (57, 'Employee44', 45, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (58, 'Employee45', 38, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (59, 'Employee46', 46, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (60, 'Employee47', 52, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (61, 'Employee48', 40, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (62, 'Employee49', 67, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (63, 'Employee50', 32, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (64, 'Employee51', 28, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (65, 'Employee52', 22, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (66, 'Employee53', 47, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (67, 'Employee54', 68, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (68, 'Employee55', 36, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (69, 'Employee56', 51, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (70, 'Employee57', 22, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (71, 'Employee58', 29, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (72, 'Employee59', 26, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (73, 'Employee60', 63, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (74, 'Employee61', 32, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (75, 'Employee62', 67, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (76, 'Employee63', 63, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (77, 'Employee64', 24, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (78, 'Employee65', 54, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (79, 'Employee66', 32, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (80, 'Employee67', 54, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (81, 'Employee68', 55, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (82, 'Employee69', 30, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (83, 'Employee70', 51, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (84, 'Employee71', 27, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (85, 'Employee72', 35, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (86, 'Employee73', 34, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (87, 'Employee74', 69, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (88, 'Employee75', 21, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (89, 'Employee76', 55, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (90, 'Employee77', 33, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (91, 'Employee78', 51, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (92, 'Employee79', 55, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (93, 'Employee80', 61, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (94, 'Employee81', 38, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (95, 'Employee82', 44, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (96, 'Employee83', 68, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (97, 'Employee84', 24, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (98, 'Employee85', 62, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (99, 'Employee86', 32, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (100, 'Employee87', 31, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (101, 'Employee88', 65, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (102, 'Employee89', 37, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (103, 'Employee90', 37, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (104, 'Employee91', 48, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (105, 'Employee92', 57, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (106, 'Employee93', 32, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (107, 'Employee94', 61, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (108, 'Employee95', 52, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (109, 'Employee96', 56, 'Intern', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (110, 'Employee97', 21, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (111, 'Employee98', 68, 'Manager', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (112, 'Employee99', 37, 'Developer', '2024-06-29 17:10:57', NULL);
INSERT INTO `employees` VALUES (113, 'Employee100', 55, 'Intern', '2024-06-29 17:10:57', NULL);

-- ----------------------------
-- Table structure for order_info
-- ----------------------------
DROP TABLE IF EXISTS `order_info`;
CREATE TABLE `order_info`  (
  `id` bigint NOT NULL AUTO_INCREMENT COMMENT 'id',
  `period` int NOT NULL COMMENT '账期月份',
  `amount` decimal(10, 4) NOT NULL COMMENT '金额',
  `user_name` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '下单人',
  `phone` varchar(11) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '手机号',
  `created` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP COMMENT '创建时间',
  `creator` varchar(20) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '创建人',
  `modified` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP COMMENT '修改时间',
  `modifier` varchar(28) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '修改人',
  PRIMARY KEY (`id`) USING BTREE,
  UNIQUE INDEX `idx_period`(`period` ASC) USING BTREE,
  INDEX `idx_modified`(`modified` ASC) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 101 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of order_info
-- ----------------------------
INSERT INTO `order_info` VALUES (1, 1, 100.0000, 'User1', '13812345678', '2024-06-21 14:41:14', 'Creator1', '2024-06-21 14:41:14', 'Modifier1');
INSERT INTO `order_info` VALUES (2, 2, 200.0000, 'User2', '13823456789', '2024-06-21 14:41:14', 'Creator2', '2024-06-21 14:41:14', 'Modifier2');
INSERT INTO `order_info` VALUES (3, 3, 300.0000, 'User3', '13834567890', '2024-06-21 14:41:14', 'Creator3', '2024-06-21 14:41:14', 'Modifier3');
INSERT INTO `order_info` VALUES (4, 4, 400.0000, 'User4', '13845678901', '2024-06-21 14:41:14', 'Creator4', '2024-06-21 14:41:14', 'Modifier4');
INSERT INTO `order_info` VALUES (5, 5, 500.0000, 'User5', '13856789012', '2024-06-21 14:41:14', 'Creator5', '2024-06-21 14:41:14', 'Modifier5');
INSERT INTO `order_info` VALUES (6, 6, 600.0000, 'User6', '13867890123', '2024-06-21 14:41:14', 'Creator6', '2024-06-21 14:41:14', 'Modifier6');
INSERT INTO `order_info` VALUES (7, 7, 700.0000, 'User7', '13878901234', '2024-06-21 14:41:14', 'Creator7', '2024-06-21 14:41:14', 'Modifier7');
INSERT INTO `order_info` VALUES (8, 8, 800.0000, 'User8', '13889012345', '2024-06-21 14:41:14', 'Creator8', '2024-06-21 14:41:14', 'Modifier8');
INSERT INTO `order_info` VALUES (9, 9, 900.0000, 'User9', '13890123456', '2024-06-21 14:41:14', 'Creator9', '2024-06-21 14:41:14', 'Modifier9');
INSERT INTO `order_info` VALUES (10, 10, 1000.0000, 'User10', '13801234567', '2024-06-21 14:41:14', 'Creator10', '2024-06-21 14:41:14', 'Modifier10');
INSERT INTO `order_info` VALUES (11, 11, 1100.0000, 'User11', '13811234568', '2024-06-21 14:41:14', 'Creator11', '2024-06-21 14:41:14', 'Modifier11');
INSERT INTO `order_info` VALUES (12, 12, 1200.0000, 'User12', '13812345679', '2024-06-21 14:41:14', 'Creator12', '2024-06-21 14:41:14', 'Modifier12');
INSERT INTO `order_info` VALUES (13, 13, 1300.0000, 'User13', '13813456780', '2024-06-21 14:41:14', 'Creator13', '2024-06-21 14:41:14', 'Modifier13');
INSERT INTO `order_info` VALUES (14, 14, 1400.0000, 'User14', '13814567891', '2024-06-21 14:41:14', 'Creator14', '2024-06-21 14:41:14', 'Modifier14');
INSERT INTO `order_info` VALUES (15, 15, 1500.0000, 'User15', '13815678902', '2024-06-21 14:41:14', 'Creator15', '2024-06-21 14:41:14', 'Modifier15');
INSERT INTO `order_info` VALUES (16, 16, 1600.0000, 'User16', '13816789013', '2024-06-21 14:41:14', 'Creator16', '2024-06-21 14:41:14', 'Modifier16');
INSERT INTO `order_info` VALUES (17, 17, 1700.0000, 'User17', '13817890124', '2024-06-21 14:41:14', 'Creator17', '2024-06-21 14:41:14', 'Modifier17');
INSERT INTO `order_info` VALUES (18, 18, 1800.0000, 'User18', '13818901235', '2024-06-21 14:41:14', 'Creator18', '2024-06-21 14:41:14', 'Modifier18');
INSERT INTO `order_info` VALUES (19, 19, 1900.0000, 'User19', '13819012346', '2024-06-21 14:41:14', 'Creator19', '2024-06-21 14:41:14', 'Modifier19');
INSERT INTO `order_info` VALUES (20, 20, 2000.0000, 'User20', '13801234567', '2024-06-21 14:41:14', 'Creator20', '2024-06-21 14:41:14', 'Modifier20');
INSERT INTO `order_info` VALUES (21, 21, 2100.0000, 'User21', '13811234568', '2024-06-21 14:41:14', 'Creator21', '2024-06-21 14:41:14', 'Modifier21');
INSERT INTO `order_info` VALUES (22, 22, 2200.0000, 'User22', '13812345679', '2024-06-21 14:41:14', 'Creator22', '2024-06-21 14:41:14', 'Modifier22');
INSERT INTO `order_info` VALUES (23, 23, 2300.0000, 'User23', '13813456780', '2024-06-21 14:41:14', 'Creator23', '2024-06-21 14:41:14', 'Modifier23');
INSERT INTO `order_info` VALUES (24, 24, 2400.0000, 'User24', '13814567891', '2024-06-21 14:41:14', 'Creator24', '2024-06-21 14:41:14', 'Modifier24');
INSERT INTO `order_info` VALUES (25, 25, 2500.0000, 'User25', '13815678902', '2024-06-21 14:41:14', 'Creator25', '2024-06-21 14:41:14', 'Modifier25');
INSERT INTO `order_info` VALUES (26, 26, 2600.0000, 'User26', '13816789013', '2024-06-21 14:41:14', 'Creator26', '2024-06-21 14:41:14', 'Modifier26');
INSERT INTO `order_info` VALUES (27, 27, 2700.0000, 'User27', '13817890124', '2024-06-21 14:41:14', 'Creator27', '2024-06-21 14:41:14', 'Modifier27');
INSERT INTO `order_info` VALUES (28, 28, 2800.0000, 'User28', '13818901235', '2024-06-21 14:41:14', 'Creator28', '2024-06-21 14:41:14', 'Modifier28');
INSERT INTO `order_info` VALUES (29, 29, 2900.0000, 'User29', '13819012346', '2024-06-21 14:41:14', 'Creator29', '2024-06-21 14:41:14', 'Modifier29');
INSERT INTO `order_info` VALUES (30, 30, 3000.0000, 'User30', '13801234567', '2024-06-21 14:41:14', 'Creator30', '2024-06-21 14:41:14', 'Modifier30');
INSERT INTO `order_info` VALUES (31, 31, 3100.0000, 'User31', '13811234568', '2024-06-21 14:41:14', 'Creator31', '2024-06-21 14:41:14', 'Modifier31');
INSERT INTO `order_info` VALUES (32, 32, 3200.0000, 'User32', '13812345679', '2024-06-21 14:41:14', 'Creator32', '2024-06-21 14:41:14', 'Modifier32');
INSERT INTO `order_info` VALUES (33, 33, 3300.0000, 'User33', '13813456780', '2024-06-21 14:41:14', 'Creator33', '2024-06-21 14:41:14', 'Modifier33');
INSERT INTO `order_info` VALUES (34, 34, 3400.0000, 'User34', '13814567891', '2024-06-21 14:41:14', 'Creator34', '2024-06-21 14:41:14', 'Modifier34');
INSERT INTO `order_info` VALUES (35, 35, 3500.0000, 'User35', '13815678902', '2024-06-21 14:41:14', 'Creator35', '2024-06-21 14:41:14', 'Modifier35');
INSERT INTO `order_info` VALUES (36, 36, 3600.0000, 'User36', '13816789013', '2024-06-21 14:41:14', 'Creator36', '2024-06-21 14:41:14', 'Modifier36');
INSERT INTO `order_info` VALUES (37, 37, 3700.0000, 'User37', '13817890124', '2024-06-21 14:41:14', 'Creator37', '2024-06-21 14:41:14', 'Modifier37');
INSERT INTO `order_info` VALUES (38, 38, 3800.0000, 'User38', '13818901235', '2024-06-21 14:41:14', 'Creator38', '2024-06-21 14:41:14', 'Modifier38');
INSERT INTO `order_info` VALUES (39, 39, 3900.0000, 'User39', '13819012346', '2024-06-21 14:41:14', 'Creator39', '2024-06-21 14:41:14', 'Modifier39');
INSERT INTO `order_info` VALUES (40, 40, 4000.0000, 'User40', '13801234567', '2024-06-21 14:41:14', 'Creator40', '2024-06-21 14:41:14', 'Modifier40');
INSERT INTO `order_info` VALUES (41, 41, 4100.0000, 'User41', '13811234568', '2024-06-21 14:41:14', 'Creator41', '2024-06-21 14:41:14', 'Modifier41');
INSERT INTO `order_info` VALUES (42, 42, 4200.0000, 'User42', '13812345679', '2024-06-21 14:41:14', 'Creator42', '2024-06-21 14:41:14', 'Modifier42');
INSERT INTO `order_info` VALUES (43, 43, 4300.0000, 'User43', '13813456780', '2024-06-21 14:41:14', 'Creator43', '2024-06-21 14:41:14', 'Modifier43');
INSERT INTO `order_info` VALUES (44, 44, 4400.0000, 'User44', '13814567891', '2024-06-21 14:41:14', 'Creator44', '2024-06-21 14:41:14', 'Modifier44');
INSERT INTO `order_info` VALUES (45, 45, 4500.0000, 'User45', '13815678902', '2024-06-21 14:41:14', 'Creator45', '2024-06-21 14:41:14', 'Modifier45');
INSERT INTO `order_info` VALUES (46, 46, 4600.0000, 'User46', '13816789013', '2024-06-21 14:41:14', 'Creator46', '2024-06-21 14:41:14', 'Modifier46');
INSERT INTO `order_info` VALUES (47, 47, 4700.0000, 'User47', '13817890124', '2024-06-21 14:41:14', 'Creator47', '2024-06-21 14:41:14', 'Modifier47');
INSERT INTO `order_info` VALUES (48, 48, 4800.0000, 'User48', '13818901235', '2024-06-21 14:41:14', 'Creator48', '2024-06-21 14:41:14', 'Modifier48');
INSERT INTO `order_info` VALUES (49, 49, 4900.0000, 'User49', '13819012346', '2024-06-21 14:41:14', 'Creator49', '2024-06-21 14:41:14', 'Modifier49');
INSERT INTO `order_info` VALUES (50, 50, 5000.0000, 'User50', '13801234567', '2024-06-21 14:41:14', 'Creator50', '2024-06-21 14:41:14', 'Modifier50');
INSERT INTO `order_info` VALUES (51, 51, 5100.0000, 'User51', '13811234568', '2024-06-21 14:41:14', 'Creator51', '2024-06-21 14:41:14', 'Modifier51');
INSERT INTO `order_info` VALUES (52, 52, 5200.0000, 'User52', '13812345679', '2024-06-21 14:41:14', 'Creator52', '2024-06-21 14:41:14', 'Modifier52');
INSERT INTO `order_info` VALUES (53, 53, 5300.0000, 'User53', '13813456780', '2024-06-21 14:41:14', 'Creator53', '2024-06-21 14:41:14', 'Modifier53');
INSERT INTO `order_info` VALUES (54, 54, 5400.0000, 'User54', '13814567891', '2024-06-21 14:41:14', 'Creator54', '2024-06-21 14:41:14', 'Modifier54');
INSERT INTO `order_info` VALUES (55, 55, 5500.0000, 'User55', '13815678902', '2024-06-21 14:41:14', 'Creator55', '2024-06-21 14:41:14', 'Modifier55');
INSERT INTO `order_info` VALUES (56, 56, 5600.0000, 'User56', '13816789013', '2024-06-21 14:41:14', 'Creator56', '2024-06-21 14:41:14', 'Modifier56');
INSERT INTO `order_info` VALUES (57, 57, 5700.0000, 'User57', '13817890124', '2024-06-21 14:41:14', 'Creator57', '2024-06-21 14:41:14', 'Modifier57');
INSERT INTO `order_info` VALUES (58, 58, 5800.0000, 'User58', '13818901235', '2024-06-21 14:41:14', 'Creator58', '2024-06-21 14:41:14', 'Modifier58');
INSERT INTO `order_info` VALUES (59, 59, 5900.0000, 'User59', '13819012346', '2024-06-21 14:41:14', 'Creator59', '2024-06-21 14:41:14', 'Modifier59');
INSERT INTO `order_info` VALUES (60, 60, 6000.0000, 'User60', '13801234567', '2024-06-21 14:41:14', 'Creator60', '2024-06-21 14:41:14', 'Modifier60');
INSERT INTO `order_info` VALUES (61, 61, 6100.0000, 'User61', '13811234568', '2024-06-21 14:41:14', 'Creator61', '2024-06-21 14:41:14', 'Modifier61');
INSERT INTO `order_info` VALUES (62, 62, 6200.0000, 'User62', '13812345679', '2024-06-21 14:41:14', 'Creator62', '2024-06-21 14:41:14', 'Modifier62');
INSERT INTO `order_info` VALUES (63, 63, 6300.0000, 'User63', '13813456780', '2024-06-21 14:41:14', 'Creator63', '2024-06-21 14:41:14', 'Modifier63');
INSERT INTO `order_info` VALUES (64, 64, 6400.0000, 'User64', '13814567891', '2024-06-21 14:41:14', 'Creator64', '2024-06-21 14:41:14', 'Modifier64');
INSERT INTO `order_info` VALUES (65, 65, 6500.0000, 'User65', '13815678902', '2024-06-21 14:41:14', 'Creator65', '2024-06-21 14:41:14', 'Modifier65');
INSERT INTO `order_info` VALUES (66, 66, 6600.0000, 'User66', '13816789013', '2024-06-21 14:41:14', 'Creator66', '2024-06-21 14:41:14', 'Modifier66');
INSERT INTO `order_info` VALUES (67, 67, 6700.0000, 'User67', '13817890124', '2024-06-21 14:41:14', 'Creator67', '2024-06-21 14:41:14', 'Modifier67');
INSERT INTO `order_info` VALUES (68, 68, 6800.0000, 'User68', '13818901235', '2024-06-21 14:41:14', 'Creator68', '2024-06-21 14:41:14', 'Modifier68');
INSERT INTO `order_info` VALUES (69, 69, 6900.0000, 'User69', '13819012346', '2024-06-21 14:41:14', 'Creator69', '2024-06-21 14:41:14', 'Modifier69');
INSERT INTO `order_info` VALUES (70, 70, 7000.0000, 'User70', '13801234567', '2024-06-21 14:41:14', 'Creator70', '2024-06-21 14:41:14', 'Modifier70');
INSERT INTO `order_info` VALUES (71, 71, 7100.0000, 'User71', '13811234568', '2024-06-21 14:41:14', 'Creator71', '2024-06-21 14:41:14', 'Modifier71');
INSERT INTO `order_info` VALUES (72, 72, 7200.0000, 'User72', '13812345679', '2024-06-21 14:41:14', 'Creator72', '2024-06-21 14:41:14', 'Modifier72');
INSERT INTO `order_info` VALUES (73, 73, 7300.0000, 'User73', '13813456780', '2024-06-21 14:41:14', 'Creator73', '2024-06-21 14:41:14', 'Modifier73');
INSERT INTO `order_info` VALUES (74, 74, 7400.0000, 'User74', '13814567891', '2024-06-21 14:41:14', 'Creator74', '2024-06-21 14:41:14', 'Modifier74');
INSERT INTO `order_info` VALUES (75, 75, 7500.0000, 'User75', '13815678902', '2024-06-21 14:41:14', 'Creator75', '2024-06-21 14:41:14', 'Modifier75');
INSERT INTO `order_info` VALUES (76, 76, 7600.0000, 'User76', '13816789013', '2024-06-21 14:41:14', 'Creator76', '2024-06-21 14:41:14', 'Modifier76');
INSERT INTO `order_info` VALUES (77, 77, 7700.0000, 'User77', '13817890124', '2024-06-21 14:41:14', 'Creator77', '2024-06-21 14:41:14', 'Modifier77');
INSERT INTO `order_info` VALUES (78, 78, 7800.0000, 'User78', '13818901235', '2024-06-21 14:41:14', 'Creator78', '2024-06-21 14:41:14', 'Modifier78');
INSERT INTO `order_info` VALUES (79, 79, 7900.0000, 'User79', '13819012346', '2024-06-21 14:41:14', 'Creator79', '2024-06-21 14:41:14', 'Modifier79');
INSERT INTO `order_info` VALUES (80, 80, 8000.0000, 'User80', '13801234567', '2024-06-21 14:41:14', 'Creator80', '2024-06-21 14:41:14', 'Modifier80');
INSERT INTO `order_info` VALUES (81, 81, 8100.0000, 'User81', '13811234568', '2024-06-21 14:41:14', 'Creator81', '2024-06-21 14:41:14', 'Modifier81');
INSERT INTO `order_info` VALUES (82, 82, 8200.0000, 'User82', '13812345679', '2024-06-21 14:41:14', 'Creator82', '2024-06-21 14:41:14', 'Modifier82');
INSERT INTO `order_info` VALUES (83, 83, 8300.0000, 'User83', '13813456780', '2024-06-21 14:41:14', 'Creator83', '2024-06-21 14:41:14', 'Modifier83');
INSERT INTO `order_info` VALUES (84, 84, 8400.0000, 'User84', '13814567891', '2024-06-21 14:41:14', 'Creator84', '2024-06-21 14:41:14', 'Modifier84');
INSERT INTO `order_info` VALUES (85, 85, 8500.0000, 'User85', '13815678902', '2024-06-21 14:41:14', 'Creator85', '2024-06-21 14:41:14', 'Modifier85');
INSERT INTO `order_info` VALUES (86, 86, 8600.0000, 'User86', '13816789013', '2024-06-21 14:41:14', 'Creator86', '2024-06-21 14:41:14', 'Modifier86');
INSERT INTO `order_info` VALUES (87, 87, 8700.0000, 'User87', '13817890124', '2024-06-21 14:41:14', 'Creator87', '2024-06-21 14:41:14', 'Modifier87');
INSERT INTO `order_info` VALUES (88, 88, 8800.0000, 'User88', '13818901235', '2024-06-21 14:41:14', 'Creator88', '2024-06-21 14:41:14', 'Modifier88');
INSERT INTO `order_info` VALUES (89, 89, 8900.0000, 'User89', '13819012346', '2024-06-21 14:41:14', 'Creator89', '2024-06-21 14:41:14', 'Modifier89');
INSERT INTO `order_info` VALUES (90, 90, 9000.0000, 'User90', '13801234567', '2024-06-21 14:41:14', 'Creator90', '2024-06-21 14:41:14', 'Modifier90');
INSERT INTO `order_info` VALUES (91, 91, 9100.0000, 'User91', '13811234568', '2024-06-21 14:41:14', 'Creator91', '2024-06-21 14:41:14', 'Modifier91');
INSERT INTO `order_info` VALUES (92, 92, 9200.0000, 'User92', '13812345679', '2024-06-21 14:41:14', 'Creator92', '2024-06-21 14:41:14', 'Modifier92');
INSERT INTO `order_info` VALUES (93, 93, 9300.0000, 'User93', '13813456780', '2024-06-21 14:41:14', 'Creator93', '2024-06-21 14:41:14', 'Modifier93');
INSERT INTO `order_info` VALUES (94, 94, 9400.0000, 'User94', '13814567891', '2024-06-21 14:41:14', 'Creator94', '2024-06-21 14:41:14', 'Modifier94');
INSERT INTO `order_info` VALUES (95, 95, 9500.0000, 'User95', '13815678902', '2024-06-21 14:41:14', 'Creator95', '2024-06-21 14:41:14', 'Modifier95');
INSERT INTO `order_info` VALUES (96, 96, 9600.0000, 'User96', '13816789013', '2024-06-21 14:41:14', 'Creator96', '2024-06-21 14:41:14', 'Modifier96');
INSERT INTO `order_info` VALUES (97, 97, 9700.0000, 'User97', '13817890124', '2024-06-21 14:41:14', 'Creator97', '2024-06-21 14:41:14', 'Modifier97');
INSERT INTO `order_info` VALUES (98, 98, 9800.0000, 'User98', '13818901235', '2024-06-21 14:41:14', 'Creator98', '2024-06-21 14:41:14', 'Modifier98');
INSERT INTO `order_info` VALUES (99, 99, 9900.0000, 'User99', '13819012346', '2024-06-21 14:41:14', 'Creator99', '2024-06-21 14:41:14', 'Modifier99');
INSERT INTO `order_info` VALUES (100, 100, 10000.0000, 'User100', '13801234567', '2024-06-21 14:41:14', 'Creator100', '2024-06-21 14:41:14', 'Modifier100');

-- ----------------------------
-- Table structure for student
-- ----------------------------
DROP TABLE IF EXISTS `student`;
CREATE TABLE `student`  (
  `studentId` varchar(32) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '学号',
  `studentName` varchar(32) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '姓名',
  `studentGender` varchar(32) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '性别',
  `studentAge` int NULL DEFAULT NULL COMMENT '年龄',
  PRIMARY KEY (`studentId`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '学生信息表' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of student
-- ----------------------------

-- ----------------------------
-- Table structure for student_course
-- ----------------------------
DROP TABLE IF EXISTS `student_course`;
CREATE TABLE `student_course`  (
  `studentId` varchar(32) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '学号',
  `courseId` varchar(32) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '课程id',
  PRIMARY KEY (`studentId`, `courseId`) USING BTREE,
  INDEX `fk_courseId`(`courseId` ASC) USING BTREE,
  CONSTRAINT `fk_courseId` FOREIGN KEY (`courseId`) REFERENCES `course` (`courseId`) ON DELETE RESTRICT ON UPDATE RESTRICT,
  CONSTRAINT `fk_studentId` FOREIGN KEY (`studentId`) REFERENCES `student` (`studentId`) ON DELETE RESTRICT ON UPDATE RESTRICT
) ENGINE = InnoDB CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '学生选课表' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of student_course
-- ----------------------------

-- ----------------------------
-- Table structure for students
-- ----------------------------
DROP TABLE IF EXISTS `students`;
CREATE TABLE `students`  (
  `id` int NOT NULL,
  `name` varchar(50) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `age` int NULL DEFAULT NULL,
  `gender` enum('male','female') CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `grade` float NULL DEFAULT NULL,
  `phone` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `status` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `email` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  `profession` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL,
  PRIMARY KEY (`id`) USING BTREE,
  UNIQUE INDEX `student_phone`(`phone` ASC) USING BTREE,
  INDEX `idx_name`(`name` ASC) USING BTREE,
  INDEX `student_profession_age_stauts`(`profession` ASC, `age` ASC, `status` ASC) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci COMMENT = '索引测试表' ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of students
-- ----------------------------
INSERT INTO `students` VALUES (1, 'Alice', 20, 'female', 85.5, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (2, 'Bob', 22, 'male', 78.2, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (3, 'Charlie', 21, 'male', 92, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (4, 'David', 19, 'male', 65.8, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (5, 'Emma', 20, 'female', 88.9, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (6, 'Frank', 23, 'male', 75.6, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (7, 'Grace', 22, 'female', 91.2, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (8, 'Henry', 20, 'male', 84.6, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (9, 'Isabella', 21, 'female', 78.3, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (10, 'Jack', 23, 'male', 87.5, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (11, 'Lily', 19, 'female', 95.8, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (12, 'Mason', 22, 'male', 82.4, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (13, 'Natalie', 20, 'female', 89.1, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (14, 'Olivia', 21, 'female', 76.5, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (15, 'Peter', 23, 'male', 88.2, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (16, 'Quinn', 22, 'female', 93.7, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (17, 'Ryan', 20, 'male', 79.4, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (18, 'Sophia', 21, 'female', 85.9, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (19, 'Tyler', 19, 'male', 81.3, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (20, 'Victoria', 22, 'female', 87.6, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (21, 'William', 20, 'male', 77.8, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (22, 'Xavier', 21, 'male', 94.3, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (23, 'Yasmine', 19, 'female', 88.7, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (24, 'Zoe', 22, 'female', 82.1, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (25, 'Adam', 21, 'male', 76.9, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (26, 'Bella', 20, 'female', 83.4, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (27, 'Cameron', 23, 'male', 90.5, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (28, 'Dylan', 22, 'male', 78.7, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (29, 'Emma', 20, 'female', 85.2, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (30, 'Frank', 21, 'male', 92.6, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (31, 'Grace', 19, 'female', 79.8, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (32, 'Henry', 22, 'male', 86.3, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (33, 'Isabella', 20, 'female', 91.7, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (34, 'Jack', 21, 'male', 75.4, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (35, 'Lily', 23, 'female', 87.9, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (36, 'Mason', 22, 'male', 83.2, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (37, 'Natalie', 20, 'female', 78.5, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (38, 'Olivia', 21, 'female', 92.1, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (39, 'Peter', 19, 'male', 85.6, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (40, 'Quinn', 22, 'female', 77.3, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (41, 'Ryan', 21, 'male', 90.8, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (42, 'Sophia', 20, 'female', 84.2, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (43, 'Tyler', 23, 'male', 79.6, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (44, 'Victoria', 22, 'female', 88.3, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (45, 'William', 20, 'male', 91.9, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (46, 'Xavier', 21, 'male', 76.7, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (47, 'Yasmine', 22, 'female', 83.1, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (48, 'Zoe', 19, 'female', 89.5, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (49, 'Adam', 21, 'male', 82.8, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (50, 'Bella', 20, 'female', 77.4, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (51, 'Cameron', 22, 'male', 93.2, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (52, 'Dylan', 23, 'male', 88.6, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (53, 'Emma', 21, 'female', 75.9, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (54, 'Frank', 20, 'male', 89.4, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (55, 'Grace', 22, 'female', 86.7, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (56, 'Henry', 19, 'male', 81.2, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (57, 'Isabella', 20, 'female', 94.8, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (58, 'Jack', 21, 'male', 78.1, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (59, 'Lily', 23, 'female', 83.6, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (60, 'Mason', 22, 'male', 89.2, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (61, 'Natalie', 20, 'female', 76.4, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (62, 'Olivia', 21, 'female', 91.1, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (63, 'Peter', 19, 'male', 85.3, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (64, 'Quinn', 22, 'female', 78.9, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (65, 'Ryan', 21, 'male', 92.4, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (66, 'Sophia', 20, 'female', 84.7, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (67, 'Tyler', 23, 'male', 79.2, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (68, 'Victoria', 22, 'female', 87.8, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (69, 'William', 20, 'male', 90.6, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (70, 'Xavier', 21, 'male', 77.7, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (71, 'Yasmine', 22, 'female', 82.3, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (72, 'Zoe', 19, 'female', 88.1, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (73, 'Adam', 21, 'male', 83.5, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (74, 'Bella', 20, 'female', 76.8, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (75, 'Cameron', 22, 'male', 91.3, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (76, 'Dylan', 23, 'male', 87.2, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (77, 'Emma', 21, 'female', 79.6, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (78, 'Frank', 20, 'male', 85.9, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (79, 'Grace', 22, 'female', 90.4, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (80, 'Henry', 19, 'male', 82.7, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (81, 'Isabella', 20, 'female', 87.6, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (82, 'Jack', 21, 'male', 93.1, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (83, 'Lily', 23, 'female', 77.5, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (84, 'Mason', 22, 'male', 91.8, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (85, 'Natalie', 20, 'female', 85.3, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (86, 'Olivia', 21, 'female', 78.9, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (87, 'Peter', 19, 'male', 92.5, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (88, 'Quinn', 22, 'female', 86.7, NULL, NULL, NULL, NULL);
INSERT INTO `students` VALUES (89, 'Ryan', 21, 'male', 80.2, NULL, NULL, NULL, NULL);

-- ----------------------------
-- Table structure for t
-- ----------------------------
DROP TABLE IF EXISTS `t`;
CREATE TABLE `t`  (
  `id` int NOT NULL AUTO_INCREMENT,
  `c1` int NULL DEFAULT NULL,
  `c2` int NULL DEFAULT NULL,
  `c3` int NULL DEFAULT NULL,
  PRIMARY KEY (`id`) USING BTREE,
  UNIQUE INDEX `idx_t_c1`(`c1` ASC) USING BTREE,
  INDEX `idx_t_c2`(`c2` ASC) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 4 CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of t
-- ----------------------------
INSERT INTO `t` VALUES (1, 1, 1, 1);
INSERT INTO `t` VALUES (2, 2, 3, 4);
INSERT INTO `t` VALUES (3, 3, 6, 9);

-- ----------------------------
-- Table structure for teachercard
-- ----------------------------
DROP TABLE IF EXISTS `teachercard`;
CREATE TABLE `teachercard`  (
  `tcid` int NULL DEFAULT NULL,
  `tcdesc` varchar(200) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL
) ENGINE = InnoDB CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of teachercard
-- ----------------------------

-- ----------------------------
-- View structure for students_view
-- ----------------------------
DROP VIEW IF EXISTS `students_view`;
CREATE ALGORITHM = UNDEFINED SQL SECURITY DEFINER VIEW `students_view` AS select `students`.`id` AS `id`,`students`.`name` AS `name`,`students`.`age` AS `age`,`students`.`gender` AS `gender`,`students`.`grade` AS `grade`,`students`.`phone` AS `phone`,`students`.`status` AS `status`,`students`.`email` AS `email`,`students`.`profession` AS `profession` from `students`;

-- ----------------------------
-- View structure for v_view1
-- ----------------------------
DROP VIEW IF EXISTS `v_view1`;
CREATE ALGORITHM = UNDEFINED SQL SECURITY DEFINER VIEW `v_view1` AS select `employee`.`ID` AS `ID`,`employee`.`NAME` AS `NAME`,`employee`.`SEX` AS `SEX`,`employee`.`AGE` AS `AGE`,`employee`.`DEPARTMENT` AS `DEPARTMENT` from `employee`;

-- ----------------------------
-- View structure for v_view2
-- ----------------------------
DROP VIEW IF EXISTS `v_view2`;
CREATE ALGORITHM = UNDEFINED SQL SECURITY DEFINER VIEW `v_view2` AS select `a`.`ID` AS `ID`,`a`.`NAME` AS `NAME`,`a`.`SEX` AS `SEX`,`a`.`AGE` AS `AGE`,`a`.`DEPARTMENT` AS `DEPARTMENT`,`b`.`POS` AS `POS`,`b`.`EXPERENCE` AS `EXPERENCE` from (`employee` `a` join `employee_detail` `b`) where (`a`.`ID` = `b`.`ID`);

-- ----------------------------
-- Procedure structure for insert_100_employees
-- ----------------------------
DROP PROCEDURE IF EXISTS `insert_100_employees`;
delimiter ;;
CREATE PROCEDURE `insert_100_employees`()
BEGIN
    DECLARE i INT DEFAULT 1;
    DECLARE max_records INT DEFAULT 100;
    
    WHILE i <= max_records DO
        INSERT INTO employees (name, age, position)
        VALUES (CONCAT('Employee', i), FLOOR(RAND() * 50) + 20, 
                CASE FLOOR(RAND() * 3)
                    WHEN 0 THEN 'Manager'
                    WHEN 1 THEN 'Developer'
                    ELSE 'Intern'
                END);
        SET i = i + 1;
    END WHILE;
    
    SELECT 'Insert complete.';

END
;;
delimiter ;

SET FOREIGN_KEY_CHECKS = 1;
