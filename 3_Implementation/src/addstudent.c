#include "declfile.h"

void addstudent()
{
s_studentinfo addstudentinfoindatebase = {0};
FILE *fp=NULL;
int status=0;
fp=fopen(FILE_NAME, "ab+");
if(fp==NULL)
{
  printf("file not exist\n");
  exit(1);
}
printf("\nEnter the student id = ");
fflush(stdin);
scanf("%u", &addstudentinfodatabase.stu_id);
do
{
  printf("father name =");
  fflush(stdin);
  fgets(addstudentinfoindatabase.fathname.MAX_FATHER_NAME,stdin);
  status= isnamevalid(addstudentinfoindatabase.fathname);
  if(!status)
  {
    printf("name is invalid\n");
  }
} 
while(!status);
do
{
  printf(" student name =");
  fflush(stdin);
  fgets(addstudentinfoindatabase.stuname,MAX_STUDENT_NAME,stdin);
  status= isnamevalid(addstudentinfodatabase.stuname);
  if(!status)
  {
    printf("name is invalid\n");
  }
}
while(!status);
do
{
  printf(" student address =");
  fflush(stdin);
  fgets(addstudentinfoindatabase.stuaddr,MAX_FATHER_NAME,stdin);
  status= isnamevalid(addstudentinfodatabase.stuaddr);
  if(!status)
  {
    printf("address is invalid\n");
  }
}
while(!status);
do
{
  printf(" enter the date =");
  scanf("%d %d %d", &addstudentinfoindatabase.studentjoiningdate.dd,&addstudentinfoindatabase.studentjiondate.mm,&addstudentinfoindatabase.studentjoindate.yyyy);
  status= isvaliddate(&addstudentinfodatabase.studentjoiningdate);
  if(!status)
  {
    printf("date is invalid\n");
  }
}
while(!status);
fwrite(&addstudentinfoindatabase,sizeof(addstudentinfoindatabase), 1,fp);
fclose(fp);
}

















  
