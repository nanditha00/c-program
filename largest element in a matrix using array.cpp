#include<stdio.h>
int main()
{
    int a[2][2]={{1,2},{3,4}},i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    if(a[0][0]>a[0][1])
    printf("%d is max\n",a[0][0]);
    else
    printf("%d is max\n",a[0][1]);
   
}

