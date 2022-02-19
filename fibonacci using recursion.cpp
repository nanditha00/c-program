#include<stdio.h>
int fibonaci(int num);
int main()
{
    int n1=0,n2=1,next,i,num;
    printf("enter the value of number");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("%d\t",fibonaci(i));
    }
}
int fibonaci(int num)
{
    if(num==0)
    return 0;
    else if(num==1)
    return 1;
    else
    return (fibonaci (num-1)+fibonaci (num-2));
}
