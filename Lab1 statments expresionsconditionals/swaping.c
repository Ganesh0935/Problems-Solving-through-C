#include<stdio.h>
int main()
{
	int a,b;
	printf("enter 2 number");
	scanf("%d %d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("after swapping => a=%d,b=%d",a,b);
}
