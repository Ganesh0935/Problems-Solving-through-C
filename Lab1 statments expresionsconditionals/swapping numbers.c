#include<stdio.h>
main(){
	int n,a,b;
	printf("Enter a and b:");
	scanf("%d%d",&a,&b);
//  with using third variable
    n=a;
    a=b;
    b=n;
    printf("a is %d,b is %d after swap \n",a,b);
//  without using third variable
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Without using third variable a is %d,b is %d",a,b);
}
