#include<stdio.h>
main()
{
	float m1,m2,m3,sum,avg;
	printf("enter the marks of three subject");
	scanf("%f%f%f",&m1,&m2,&m3);
	sum=m1+m2+m3;
	avg=sum/3;
	printf("summation=%f average=%f",sum,avg);
}
