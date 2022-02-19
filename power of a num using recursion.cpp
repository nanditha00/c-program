#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,res;
    printf("enter the value of base");
    scanf("%d",&a);
    printf("enter the value of power");
    scanf("%d",&b);
    res=pow(a,b);
    printf("the power of a and b is %d",res);
    return 0;
}
int power(int a,int b)
{
    if(b!=0)
    return power(a,b);
    else
    return 1;
}
