#include<stdio.h>
int main()
{
	char op;
	int a,b;
	printf("enter the operator you want (+,-,*,/)\n",op);
	scanf("%c",&op);
	printf("enter the values of a and b",a,b);
	scanf("%d\t%d",&a,&b);
	switch(op)
	{
	case '+':
	printf("the addition is %d+%d=%d",a,b,a+b);
	break;
	case '-':
	printf("the subtraction is %d-%d=%d",a,b,a-b);
	break;
	case'*':
	printf("the multiplication is %d*%d=%d",a,b,a*b);
	break;
    case '/':
	printf("the division is %d/%d=%d",a,b,a/b);
	break;
	default:
	printf("error");
	}
	return 0;
	}