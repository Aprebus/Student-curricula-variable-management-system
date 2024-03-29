﻿#ifndef         _CMS_H
#define         _CMS_H

// #define         DEBUG

#define         SOFTWARE_TITLE          "CMS > "

#define         ADMIN_AUTH_CODE         0
#define         STUDENT_AUTH_CODE       1
#define         TEACHER_AUTH_CODE       2

#define         GREEN                   "\033[0;32;32m"
#define         RED                     "\033[0;32;31m"
#define         BLUE                    "\033[0;32;34m"
#define         NONE                    "\033[m"

#define         PSWD_FILE_PATH          "..\\data\\user.dat"
#define         TEACHER_FILE_PATH       "..\\data\\teacher.dat"
#define         STUDENT_FILE_PATH       "..\\data\\student.dat"
#define         COURSE_FILE_PATH        "..\\data\\course.dat"

#ifdef          _WIN32
#define         SYSTEM_CLEAR_SCREEN     system("cls"); 
#else
#define         SYSTEM_CLEAR_SCREEN     system("clear"); 
#endif

 

#endif