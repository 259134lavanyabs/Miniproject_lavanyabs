/**
* @file declfile.h
* @author your name
* @brief
* @version 0.1
*
* @copyright Copyright (c) 2021
**/

# ifndef __DECLFILE_H__
# define __DECLFILE_H__
/**
* @brief function to add the student information
*
*/
#include <stdio.h>

#define MAX_FATHER_NAME 50
#define MAX_STUDENT_NAME 50
#define MAX_SUDENT_ADDRESS 300

typedef struct
{
  unsigned int stu_id;
  char fathname[MAX_FATHER_NAME];
  char stuname[MAX_STUDENT_NAME];
  char studaddr[MAX_STUDENT_ADDRESS];
  date studentjoiningdate;
}s_studentinfo;

/**
* @brief the function to add the student
*
*/
void addstudentindatabase();
/**
* @brief the function search the student
*
*/
void searchstudent();
/**
* @brief function to view the list of the student
*
*/
void viewstudent();
/**
* @brief function to delete the student
*
*/
void deletestudent();
/**
* @brief function to update the student record
*
*/
void updatestudent();

#endif /** DECLFILE**/



