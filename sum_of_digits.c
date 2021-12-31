#include<stdio.h>
int sum_of_digits(int);

int main()
{
	int num,sum;
	printf("Enter a number\n");
	scanf("%d",&num);
	sum=sum_of_digits(num);
	printf("The sum of the digits of the number is %d\n",sum);
	return 0;
 } 
 
 int sum_of_digits(int num)
 {
 	if(num==0)
 	{
 		return 0;
	 }
	 else
	 {
	 	return num%10 + sum_of_digits(num/10);
	 }
 }
