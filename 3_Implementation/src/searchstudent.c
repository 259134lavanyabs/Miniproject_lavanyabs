void searchstudent()
{
  int found=0;
  int studentid=0;
  s_studentinfo addstudentinfoindatabase= {0};
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
  scanf("%u", &studentid);
  while(fread(&addstudentindatabase, sizeof(addstudentinfoindatabase),1,fp))
  {
    if(addstudentinfoindatabase.studentid == studentid)
    {
      found=1;
      break;
    }
  }
  if(found)
  {
    printf("studentid=%d",addstudentinfoindatabase.studentid);
    printf("studentname=%d",addstudentinfoindatabase.studentid);
    printf("fathername=%d",addstudentinfoindatabase.studentid);
    printf("studentaddress=%d",addstudentinfoindatabase.studentid);
    printf("studentadmissiondate=%d/%d/%d",addstudentinfoindatabase.studentjoiningdate.dd,addstudentinfoindatabase.studentjoiningdate.mm,addstudentinfoindatabase.studentjoiningdate.yyyy);
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
    
    
    
