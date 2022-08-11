# 学生选课管理系统
course management system
学术与工程实践小学期课设

工程目录结构：
bin - 存放可执行文件
data – 存放用户数据
include – 存放程序需要的头文件
makefile – 工程编译规则
obj – 存放目标文件
src – 存放源代码

介绍：
学生选课管理系统，实现学生选课、教师查课、管理员管理等功能。

设计内容与要求：
1、系统用户由三类组成：教师、学生和管理员。
2、管理员负责的主要功能：用户管理（老师、学生及管理员的增、删、改）；
3、学生通过登录，可以查询课程的基本信息、实现选课、退课；
4、老师通过登录，可以查看选课学生的基本信息。

系统设计和实现：
1.界面类(CInterface): 程序与用户交互，接收用户输入并向用户传递信息。
2.数据类(CData): 程序与文件交互，为其他类提供文件操作接口；
3.课程类(CCourse): 每一门课程对应一个课程类对象；
4.管理类(CAdmin): 可以分别对课程、教师、学生进行增删改查；
5.教师类(CTeacher): 可以查询选课信息和学生信息；
6.学生类(CStudent): 可以选课、退选课、查看选课结果。

管理员
1.对教师进行增删查改
2.对学生进行增删查改
3.对课程进行增删查改
教师
1.查看个人信息
2.修改个人密码
3.查看课程列表
4.查看学生列表
学生
1.查看个人信息
2.修改个人密码
3.选课
4.查看选课结果
5.退选课



用vs直接打开 CMS 副本 win环境/cms/cms.sin
