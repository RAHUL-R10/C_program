#include<stdio.h>
main()
{
	int a,b;
	printf("Enter any two integer numbers\n ");
	scanf("%d%d",&a,&b);
	printf("numbers before swap are a=%d and b=%d\n",a,b);
	a=a+b;//a becomes a+b
	b=a-b;//b becomes (a+b)-b=a
	a=a-b;//a becomes (a+b)-a=b
	printf("numbers after swap are a=%d and b=%d\n",a,b);
}
