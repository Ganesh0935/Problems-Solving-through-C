#include<stdio.h>
int GCD(int , int);
int main()
{
	int a,res;
	printf("Enter any number:");
	scanf("%d",&a);	
	int count=0;
for(int i=1;i<=a;i++){
		res=GCD(a,i);
		if(res==1){
			count++;
		}
	}
		printf("Result is %d",count);
	
//	result=GCD(a,b);
//    printf("GCD of a:%d,b:%d,is %d",a,b,result);   
}

int GCD(int a,int b)
{
	int remain;
	remain=a%b;
	if(remain==0)
	{
		return b;
	}
	else
	{
		return GCD(b,remain);
	}
	
}
