#include<stdio.h>
int leapyear(int a)
{
    if(a%4==0)
    return a;
    else
    printf("not a leap year");
}
int main()
{
    int i,j;
    for(i=1991;i<=2021;i++)
    {
        j=leapyear(i);
        printf("%d\n",i);
    }
    return 0;
}

