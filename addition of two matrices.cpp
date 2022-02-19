#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],row,col,i,j;
    printf("enter the order of the matrix");
    scanf("%d%d",&row,&col);
    for(i=0;i<row;i++)
    {
       printf("enter row :");
       for(j=0;j<col;j++)
       {
           scanf("%d",&a[i][j]);
       }
    }
    printf("for matrix b\n");
    for(i=0;i<row;i++)
    {
        printf("enter row");
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
         printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    
}
