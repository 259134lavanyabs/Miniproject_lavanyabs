void searchstudent()
{
  int found=0;
  int stuid=0;
  s_stuinfo addinfo= {0};
  FILE *fp=NULL;
  fp =fopen(FILE_NAME, "rb");
  if(fp==NULL)
  {
    printf("file not exsit");
    exit(1);
  }
if(fseek(fp.FILE_HEADER_SIZE,SEEK_SET) !=0)
{
  fclose(fp);
  printf("not able to read file");
  exit(1);
}
  
printf("enter the student id to search");
fflush(stdin);
  scanf("%u", &stuid);
  while(fread(&addinfo, sizeof(addinfo),1,fp))
  {
    if(addinfo.stuid == stuid)
    {
      found=1;
      break;
    }
  }
  if(found)
  {
    printf("studentid=%d",addinfo.stuid);
    printf("studentname=%d",addinfo.stuid);
    printf("fathername=%d",addinfo.stuid);
    printf("studentaddress=%d",addinfo.stuid);
    printf("studentadmissiondate=%d/%d/%d",addinfo.studentjd.dd,addinfo.studentjd.mm,addinfo.studentjd.yyyy);
  }
  else
  {
    printf("no record");
  }
  fclose(fp);
  printf("press any key to exit");
  fflush(stdin);
  getchar();
}
    
    
    
