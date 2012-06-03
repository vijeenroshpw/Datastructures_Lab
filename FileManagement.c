#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
  char name[30];
  int id;
  float percentage;
  char grade;
};
int main(int argc,char**argv)
{
  FILE *fp,*fd;
  struct student stu;
  char command[30] = "grep ",search[10],action[10];
  int id;
  printf(" add - Add  delete - Delete  view -View  search -Search  exit -Exit\n");
  while(1)
  {
   printf(">>>");
   scanf("%s",action);
   if(! strcmp("add",action))
   {
  fp = fopen("data.txt","a");
  printf(" Enter name id percentage grade :");
  scanf("%s %d %f %c",stu.name,&stu.id,&stu.percentage,&stu.grade);
  fprintf(fp,"%s %d %f %c\n",stu.name,stu.id,stu.percentage,stu.grade);
  fclose(fp); 
   }
  else if(!strcmp("view",action))
  {
 fp = fopen("data.txt","r");
  while(fscanf(fp,"%s %d %f %c",stu.name,&stu.id,&stu.percentage,&stu.grade)!=EOF)
  {
     printf("%s %d %f %c\n",stu.name,stu.id,stu.percentage,stu.grade);
  }
  fclose(fp); 
  }
  else if(!strcmp("delete",action))
  {
  fp = fopen("data.txt","r");
  fd = fopen("temp.txt","w");
  printf(" Enter the id of student to be deleted ");
  scanf("%d",&id); 
  while( fscanf(fp,"%s %d %f %c",stu.name,&stu.id,&stu.percentage,&stu.grade) != EOF)
  {
    if(stu.id != id)
    {
      fprintf(fd,"%s %d %f %c\n",stu.name,stu.id,stu.percentage,stu.grade);
    }
  }
  fclose(fp);
  fclose(fd);
  fp = fopen("data.txt","w");
  fd = fopen("temp.txt","r");
  while(fscanf(fd,"%s %d %f %c",stu.name,&stu.id,&stu.percentage,&stu.grade) != EOF)
  {
    fprintf(fp,"%s %d %f %c\n",stu.name,stu.id,stu.percentage,stu.grade);
  }
  fclose(fp); 
 }
 else if(!strcmp("search",action))
  {
  printf(" Enter the phrase to be searched :");
  scanf("%s",search);
  //system("grep kill data.txt > temp.txt");
  strcat(command,search);
  strcat(command ," data.txt > temp.txt");
  printf("%s\n",command);  
system(command);
  
  fp = fopen("temp.txt","r");
  while(fscanf(fp,"%s %d %f %c",stu.name,&stu.id,&stu.percentage,&stu.grade) != EOF)
  {
     printf("%s %d %f %c\n",stu.name,stu.id,stu.percentage,stu.grade);
  }
  fclose(fp);
 }
 else
   break;
}
}




