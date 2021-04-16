#include "declfile.h"

void viewstudent()
{
  int found=0;
  s_studentinfo addstudentinfoindatabase={0};
  FILE *fp= NULL:
  unsigned int countstudent=1;
  fp=fopen(FILE_NAME,"rb");
  if(fb==NULL)
  {
    printf("file not opened");
  }
  if(fseek(fp,FILE_HEADER_SIZE,SEEK_SET)!=0)
  {
    fclose(fp);
    printf("file  not exist");
    exit(1);
  }
  while(fread (&addstudentinfoindatabase,sizeof(addstudentinfoindatabase),1,fp))
  {
    printf("student count=%d",countstudent);
    printf("student id=%u",addstudentinfoindatabase.studentid);
    printf("student name=%s",addstudentinfoindatabase.studentname);
    printf("father name id=%s",addstudentinfoindatabase.fathername);
    printf("student admission date=%d %d %d",addstudentinfoindatabase.studentjoiningdate.dd,addstudentinfoindatabase.studentjoiningdate.mm,addstudentinfoindatabase.studentjoiningdate.yyyy);
    found=1;
    ++countstudent;
  }
  fclose(fp);
  if(!found)
  {
    printf("no record found");
  }
  fflush(stdin);
  getchar();
}



    
