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
void Add_Record()
{
  struct student stu;
  FILE *fp;
  fp = fopen("data.txt","a");
  printf(" Enter name id percentage grade :");
  scanf("%s %d %f %c",stu.name,&stu.id,&stu.percentage,&stu.grade);
  fprintf(fp,"%s %d %f %c\n",stu.name,stu.id,stu.percentage,stu.grade);
  fclose(fp); 
}
void View()
{
  FILE *fp;
  struct student stu;
  fp = fopen("data.txt","r");
  while(fscanf(fp,"%s %d %f %c",stu.name,&stu.id,&stu.percentage,&stu.grade)!=EOF)
  {
     printf("%s %d %f %c\n",stu.name,stu.id,stu.percentage,stu.grade);
  }
  fclose(fp); 
}
void Delete()
{
  FILE *fp,*fd;
  struct student stu; 
  int id;
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
void Update(int id)
{
  
  FILE *fp,*fd;
  struct student stu; 
  
  fp = fopen("data.txt","r");
  fd = fopen("temp.txt","w");
  
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
  Add_Record();
}

void Search()
{
  FILE *fp;
  struct student stu;
  char command[30] = "grep ",search[10],action[10];
   printf(" Enter the phrase to be searched :");
  scanf("%s",search);
  //system("grep kill data.txt > temp.txt");
  strcat(command,search);
  strcat(command ," data.txt > temp.txt");
    
  system(command);
  
  fp = fopen("temp.txt","r");
  while(fscanf(fp,"%s %d %f %c",stu.name,&stu.id,&stu.percentage,&stu.grade) != EOF)
  {
     printf("%s %d %f %c\n",stu.name,stu.id,stu.percentage,stu.grade);
  }
  fclose(fp);
}

void Sort()
{
  char command[30];
  FILE *fp;
  int choise ;
  printf(" Sort based on : 1-name   2-id  3-percentage 4-grade\n");
  scanf("%d",&choise);
  switch(choise)
  {
    case 1:
     strcpy(command,"sort -t \" \" -k 1  data.txt");
     break;
    case 2:
        strcpy(command,"sort -t \" \" -k 2 -n data.txt");
        break;
    case 3:
         strcpy(command,"sort -t \" \" -k 3 -n data.txt");
         break;
    case 4:
          strcpy(command,"sort -t \" \" -k 4 data.txt");
         break;
    default:
         strcat(command,"");
  }
  system(command);
  printf(" Succesfully sorted \n");
}
int main(int argc,char**argv)
{
  FILE *fp,*fd;
  struct student stu;
  char command[30] = "grep ",search[10],action[10];
  int id;
  printf(" add - Add  delete - Delete  view -View  search -Search  exit -Exit\n");
  printf(" sort - Sort update - Update \n");
  while(1)
  {
   printf(">>>");
   scanf("%s",action);
   if(! strcmp("add",action))
   {
         Add_Record(); 
   }
  else if(!strcmp("view",action))
  {
     View();
  }
  else if(!strcmp("delete",action))
  {
     Delete();
  }
 else if(!strcmp("search",action))
  {
     Search();
  }
 else if(!strcmp("sort",action))
 {
    Sort();
 }
 else if(!strcmp("update",action))
 {
   printf(" Enter the id of the student to be updated :");
   scanf("%d",&id);
   Update(id); 
 }
 else
   break;
}
}




