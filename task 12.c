#include<stdio.h>
main()
{
	char ch;
	float temp,fah,cel,a,b;
	printf("enter temperature\n'c'fahrenheit\n'd'celcius\n'e'exit\n");
	printf("enter the characters(c-e)");
	fflush(stdin);
	scanf("%c",&ch);
	switch(ch)
	{
		case 'c':
			printf("enter the temperature in celcius\n");
			scanf("%f",&a);
			fah=1.8*a+32;
			printf("celcius to fahrenheit=%f",fah);
			break;
		case 'd':
			printf("enter the temperature in fahreinheit\n");
			scanf("%f",&b);
			cel=5*(b-3.55);
			printf("fahrenheit to celcius=%f",cel);
			break;
		case 'e':
		     exit(0);
	}
	
}
