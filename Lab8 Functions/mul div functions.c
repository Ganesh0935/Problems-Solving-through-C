#include <stdio.h>
int mul(int a,int b){
	int m=0,i=0;
	if(b<0){
		b=-b;
		a=-a;
    }
    for(i=1;i<=b;i++){
    	m+=a;
	}  
	return m;
}

int div(int a,int b){
	int i=0;
	if(b!=0){
		while(a>=b){
			a=a-b;
			i++; 
		}
	}
	return i;
}



int main(){   
	int a=2,b=6,c=mul(a,b),k=div(b,a);
	printf("%d is multiplied with %d is %d",a,b,c);
	printf("\n%d is divided by %d is %d",b,a,k);
	return 0;
}
