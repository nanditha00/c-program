#include<stdio.h>
int main()
{
    int a[3]={3,4,5};
    if(a[0]>a[1])
    printf("%d is big",a[0]);
    else if(a[1]>a[2])
    printf("%d is big",a[1]);
    else
    printf("%d is big",a[2]);
    return 0;
}

