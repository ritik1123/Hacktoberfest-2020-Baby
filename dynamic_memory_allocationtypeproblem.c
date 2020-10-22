#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
      int **a, row,col,i,j,sum=0;
      printf("Enter Limit for Rows : ");
      scanf("%d",&row);
      printf("\nEnter Limit for Columns : ");
      scanf("%d",&col);
      a=(int *)malloc(row*sizeof(int));
      for(i=0;i<row;i++)
      {
           a[i]=(int *)malloc(col*sizeof(int));
      }
      printf("\nEnter elements for Matrix of size %d*%d:\n",row,col);
      for(i=0;i<row;i++)
      {
          for(j=0;j<col;j++)
          {
                scanf("%d",&a[i][j]);
          }
      }
      printf("\n%d*%d Matrix : \n\n",row,col);
      for(i=0;i<row;i++)
      {
          for(j=0;j<col;j++)
           {
               printf("%3d ",a[i][j]);
           }
      printf("\n");
      }

      for(row = 0; row < i; row++)
      {
            sum = sum + a[row][row];
      }
      printf("\nSum of all diagonal  elements in Matrix is  : %d",sum);
      
      sum=0;
      for(i=0;i<row;i++)
      {
      for(j=0;j<col;j++)
        {
           if(i!=j)
                 sum=sum+a[i][j];
         }
      }
      printf("\nSum of all non diagonal  elements in Matrix is  : %d",sum);

getch();
}
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
      int **a, row,col,i,j,sum=0;
      printf("Enter Limit for Rows : ");
      scanf("%d",&row);
      printf("\nEnter Limit for Columns : ");
      scanf("%d",&col);
      a=(int *)malloc(row*sizeof(int));
      for(i=0;i<row;i++)
      {
           a[i]=(int *)malloc(col*sizeof(int));
      }
      printf("\nEnter elements for Matrix of size %d*%d:\n",row,col);
      for(i=0;i<row;i++)
      {
          for(j=0;j<col;j++)
          {
                scanf("%d",&a[i][j]);
          }
      }
      printf("\n%d*%d Matrix : \n\n",row,col);
      for(i=0;i<row;i++)
      {
          for(j=0;j<col;j++)
           {
               printf("%3d ",a[i][j]);
           }
      printf("\n");
      }

      for(row = 0; row < i; row++)
      {
            sum = sum + a[row][row];
      }
      printf("\nSum of all diagonal  elements in Matrix is  : %d",sum);
      
      sum=0;
      for(i=0;i<row;i++)
      {
      for(j=0;j<col;j++)
        {
           if(i!=j)
                 sum=sum+a[i][j];
         }
      }
      printf("\nSum of all non diagonal  elements in Matrix is  : %d",sum);

getch();
}
