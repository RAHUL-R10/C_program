#include<stdio.h>
int lcm(int,int);

int main()
{
	int a ,b,result ;
	printf("Enter any two numbers\n");
	scanf("%d%d",&a,&b);
	result=lcm(a,b);
	printf("The lcm of %d and %d is %d\n",a,b,result);
	return 0;
}

int lcm(int a,int b)
{
	static int i=1;
	if(i%a==0 && i%b==0)
	{
		return i;
	}
	else
	{
		i++;
		lcm(a,b);
		return i;
	}
}
