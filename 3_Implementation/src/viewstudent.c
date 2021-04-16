#include "declfile.h"

void viewstudent()
{
  int found=0;
  s_stuinfo addinfo={0};
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
  while(fread (&addinfo,sizeof(addinfo),1,fp))
  {
    printf("student count=%d",countstudent);
    printf("student id=%u",addinfo.stuid);
    printf("student name=%s",addinfo.stuname);
    printf("father name id=%s",addinfo.fathname);
    printf("student admission date=%d %d %d",addinfo.studentjd.dd,addinfo.studentjd.mm,addinfo.studentjd.yyyy);
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



    
