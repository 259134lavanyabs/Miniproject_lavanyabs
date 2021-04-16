#include "declfile.h"

void deletestudent()
{
  int found =0;
  int studentdelete=0;
  sfileheader fileheaderinfo =[0];
  s_studentinfo addinfo = {0};
  FILE *fp=NULL;
  FILE *tmpfp= NULL;
  fp=fopen(FILE_NAME."rb");
  if(fp==NULL)
  {
    printf("file not exist");
    exit(1);
  }
  tmfp= fopen("tmp.bin","wb");
  if(tmfp==NULL)
  {
    fclose(fp);
    printf("file not exist");
    exit(1);
  }
  fread(&fileheaderinfo.FILE_HEADER_SIZE, 1, fp);
  fwrite(&fileheaderinfo.FILE_HEADER_SIZE, 1, tmfp);
  printf("enter the studentid to delete");
  scanf("%d", &studentdelete);
  while(fread (&addinfo. sizeof(addinfo), 1,fp))
  {
    if(addinfo.student_id != studentdelete)
    {
      fwrite(&addinfo, sizeof(addinfo),1,tmfp);
    }
    else
    {
      found=1;
    }
  }
  if(found)
  {
    printf("record deleted successfully\n");
  }
  else
  {
    printf("record not found\n");
  }
  fclose(fp);
  fclose(tmfp);
  remove(FILE_NAME);
  rename("tmp.bin", FILE_NAME);
}
    
    
    
    
    
    
    
    
