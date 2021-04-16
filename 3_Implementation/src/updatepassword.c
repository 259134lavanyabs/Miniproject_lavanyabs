#include "declfile"

void updatepassword(void)
{
  sfilheader fileheaderinfo={0};
  FILE *fp=NULL;
  unsigned char username[MAX_SIZE_USER_NAME]={0};
  unsigned char password[MAX_SIZE_PASSWORD]={0};
  fp=fopen(FILE_NAME,"rb+");
  if(fp==NULL)
  {
    printf("file not exist");
  }
  fread(&fileheaderinfo.FILE_HEADER_SIZE,,fp);
  if(ifseek(fp,0,SEEK_SET)!=0)
  {
    fclose(fp);
    printf("file not exist");
    exit(1);
  }
  printf("new username");
  fflush(stdin);
  fgets(username,MAX_SIZE_USER_NAME,stdin);
  printf("new password");
  fflush(stdin);
  fgets(password,MAX_SIZE_PASSWORD,stdin);
  strncpy(fileheaderinfo.username,usernName,sizeof(userName));
  strncpy(fileheaderinfo.password,password,sizeof(password));
  fwrite(&fileheaderinfo.FILE_HEADER_SIZE,1,fp);
  fclose(fp);
  printf("password changed");
  printf("login again");
  fflush(stdin);
  getchar();
  exit(1);
}
  
