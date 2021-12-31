#include<stdio.h>
main()
{
 int i,j,row;
printf("enter the number of rows: ");
scanf("%d",&row);
 i=0,j=0;
for(i=1;i<=row;i++)
 {
  for(j=1;j<=i;j++)
    {
      printf("01");
    }
   printf("\n");
  }
}
//pattern
//01
//0101
//010101
//01010101
//0101010101
//010101010101
