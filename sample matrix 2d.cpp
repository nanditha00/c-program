#include<stdio.h>
int main()
{
    int a[10][10],i,j,row,col;
    printf("enter the matrix order");
    scanf("%d%d",&row,&col);
    for(i=0;i<row;i++)
    {
         printf("enter row:");
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
