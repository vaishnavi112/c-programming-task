#include<stdio.h>
main()
{
	int fact=1,i=1,num;
	printf("enter the number");
	scanf("%d",&num);
	while(i<=num)
	{
	fact=fact*i;
	i=i+1;
	}
	printf("factorial=%d",fact);
}
