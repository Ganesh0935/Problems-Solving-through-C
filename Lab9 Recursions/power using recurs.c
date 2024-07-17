#include<stdio.h>
// #include<math.h>
float power_of(float,float);

float main()
{
	float x,n,result;
	printf("Enter the numbers in (base,power)form");
	scanf("%f%f",&x,&n);
	result=power_of(x,n);
	printf("Power of (%.2f,%.2f):%.3f",x,n,result);
}

float power_of(float a,float b)
{
	if(b==0)
	{
		return 1;
	}
	else if(b>0)
	{
		return a*power_of(a,b-1);
	}
	else
	{
		float k=-1*(b)-1;
		return 1/(a*power_of(a,k));
	}
}
