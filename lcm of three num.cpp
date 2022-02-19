#include<stdio.h>
int check(int,int);
int main()
{
    int a,b,lcm;
    printf("enter two integers to fin lcm of :");
    scanf("%d%d",&a,&b);
    lcm=check(a,b);
    printf("lcm of %d and%d is %d",a,b,lcm);
    return 0;
}
int check (int a,int b)
{
    static int temp=1;
    if(temp%a==0 && temp%b==0)
    {
        return temp;
    }
    else
    {
        temp++;
        check(a,b);
        return temp;
    }
}
