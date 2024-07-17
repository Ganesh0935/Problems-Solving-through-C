#include <stdio.h>
#include <math.h>
void main(){
	double a;
	printf("Enter a number: ");
	scanf("%lf",&a);
	double squareRootNum=sqrt(a);
	int intnum = (int)squareRootNum;
	if(squareRootNum - intnum == 0){
		printf("It is a perfect square");
	}
	else{
		printf("It is not perfect square");
	}
}
