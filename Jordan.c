#include<stdio.h>
#include<unistd.h>
int main()
{
  int no_unknown,i,j,k,z,l,m;
  float aug_mat[10][10],temp;
  scanf("%d",&no_unknown);
  for(i=0;i<no_unknown;i++)
  {
    for(j=0;j<=no_unknown;j++)
    {
      scanf("%f",&aug_mat[i][j]);printf("%.2f  ",aug_mat[i][j]);
    }printf("\n");
  }  
  printf("-----------------------------------------------------\n");
   
   for(i=0;i<no_unknown;i++)
   {   
     temp =1/aug_mat[i][i];
     for(j=0;j<=no_unknown;j++)
       aug_mat[i][j]*=temp; 
    
       printf("-------------------------------------\n");
           for(l=0;l<no_unknown;l++)
           {
             for(m=0;m<=no_unknown;m++)
             {
               printf("%.2f ",aug_mat[l][m]);
             }
             printf("\n");
           }
  printf("----------------------------------\n");
     for(k=i-1;k>=0;k--)  // goes up 
     {   
       temp = aug_mat[k][i]; 
       for(z=0;z<=no_unknown;z++)      
       {   
         aug_mat[k][z] -= temp*aug_mat[i][z];
       }
     }
     for(k=i+1;k<no_unknown;k++)
     {
        temp = aug_mat[k][i];
        for(z=0;z<=no_unknown;z++)
        {
          aug_mat[k][z] -= temp*aug_mat[i][z];
        }
     }
   }
for(i=0;i<no_unknown;i++)
  {
    for(j=0;j<=no_unknown;j++)
    {
      printf("%.2f ",aug_mat[i][j]);
    }
    printf("\n");
  }

}   
