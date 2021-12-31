#include<stdio.h>
 int main()
 {
 	int arr[3][3],i,j,sum=0;
 	int *ptr[3][3];
 	
 	for(i=0;i<3;i++)
 	{
 		for(j=0;j<3;j++)
 		{
 			ptr[i][j]=&arr[i][j];
 			printf("Enter the element for [%d][%d]: ",i,j);
 			scanf("%d",ptr[i][j]);
		 }
	 }
     		 	
	 printf("\n  The Matrix is: \n\n");
	 for(i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	{
	 		printf("%5d",*ptr[i][j]);
	 		if(i==j)
	 		{
	 			sum += *ptr[i][j];
			 }
		 }
		printf("\n"); 
	 }
	
	printf("\nThe sum of diagonal elements is %d",sum); 
 }
