#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter any three variables",a,b,c);
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a<b&&a<c)
    {
    printf("a is minimum");
    }
    else if(b<c&&b<a)
    {
    printf("b is minimum");
    }
	if(c<a&&c<b)
    {
    printf("c is minimum");
    }
    return 0;
}