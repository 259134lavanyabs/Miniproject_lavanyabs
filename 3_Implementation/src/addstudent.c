#include "declfile.h"

void addstudent()
{
s_stuinfo addinfo = {0};
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
scanf("%u", &addinfo.stu_id);
do
{
  printf("father name =");
  fflush(stdin);
  fgets(addinfo.fathname.MAX_FATHER_NAME,stdin);
  status= isnamevalid(addinfo.fathname);
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
  fgets(addinfo.stuname,MAX_STUDENT_NAME,stdin);
  status= isnamevalid(addinfo.stuname);
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
  fgets(addinfo.stuaddr,MAX_FATHER_NAME,stdin);
  status= isnamevalid(addinfo.stuaddr);
  if(!status)
  {
    printf("address is invalid\n");
  }
}
while(!status);
do
{
  printf(" enter the date =");
  scanf("%d %d %d", &addinfo.studentjd.dd,&addinfo.studentjd.mm,&addinfo.studentjd.yyyy);
  status= isvaliddate(&addinfo.studentjd);
  if(!status)
  {
    printf("date is invalid\n");
  }
}
while(!status);
fwrite(&addinfo,sizeof(addinfo), 1,fp);
fclose(fp);
}

















  
