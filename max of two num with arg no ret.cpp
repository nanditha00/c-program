#include<stdio.h>
int maximum(int a,int b)
{
    if(a>b)
    printf("a is maximum");
    else
    printf("b is maximum");
}
int main()
{
int i,j,k;
printf("enter the values of i and j");
scanf("%d%d",&i,&j);
k=maximum(i,j);
}

