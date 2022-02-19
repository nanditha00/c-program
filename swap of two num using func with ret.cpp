#include<stdio.h>
int swap(int a,int b,int c)
{
    int s;
    a=b;
    b=c;
 c=a;
    return s;
}
int main()
{
    int i,j,k,l;
    printf("enter the values of i j and k");
    scanf("%d%d%d",&i,&j,&k);
    l=swap(i,j,k);
    printf("after swapping %d\n%d\n%d",j,k,i);
    return 0;
}
