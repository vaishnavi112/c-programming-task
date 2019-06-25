#include<stdio.h>
main()
{
	int num,d,sum=0,ori;
	printf("enter any number");
	scanf("%d",&num);
	ori=num;
	while(num>0)
	{
		d=num%10;
		sum=sum+(d*d*d);
		num=num/10;
	}
	if(ori==sum)
	{
		printf("number is a armstrong");
	}
	else
	{
	printf("number is not armstrong");
    }
}
