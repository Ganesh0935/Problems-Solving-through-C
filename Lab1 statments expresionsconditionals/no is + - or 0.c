#include <stdio.h>
void main(){
	int num;
	printf("Enter the munber:");
	scanf("%d",&num);
	(num>0)?printf("positive \n"):(num<0) ? printf("negative \n"):printf("zero \n");

}
// (condition)?(true):(false)
