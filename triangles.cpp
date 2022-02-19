#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values of three sides of a triangle",a,b,c);
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a==b==c)
    {
        printf("the given sides forms a equilateral triangle");
    }
    if(a!=b!=c)
    {
        printf("the given sides forms a scalene triangle");
    }
    if(a==b!=c||a!=b==c)
   {
       printf("the given sides forms a isosceles triangle");
   }
   return 0;
}