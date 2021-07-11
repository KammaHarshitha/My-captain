#include<stdio.h>
int main()
{
	int a,b,temp=0;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping\n");
	printf("a value is %d\n",a);
	printf("b value is %d",b);
	return 0;
}
