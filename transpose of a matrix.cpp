#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],i,j,row,col;
    printf("enter the order");
    scanf("%d%d",&row,&col);
    for(i=0;i<row;i++)
    {
        printf("enter row:");
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix b\n");
    for(i=0;i<row;i++)
    {
        printf("enter row:");
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("the matrix a is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("the matrix b is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("the transpose matrix of a is:\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    printf("the transpose matrix of b is:\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d\t",b[j][i]);
        }
        printf("\n");
    }
}
