#include<stdio.h>
int main()
{
	int a;
	printf("Enter marks:\n");
	scanf("%d",&a);
	if(a>=85 && a<=100)
	{
		printf("Grade A ");
	}
	if(a>=70 && a<=84)
	{
		printf("Grade B ");
	}
	if(a>=55 && a<=69)
	{
		printf("Grade C ");
	}
	if(a>=40 && a<=54)
	{
		printf("Grade D ");
	}
	if(a<40)
	{
		printf("Grade F ");
	}
	 return 0;
}
