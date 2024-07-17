#include<stdio.h>
int numbers(int ,int );
int reverse(int ,int );

int main(){
	int n;
	printf("Enter the n :");
	scanf("%d",&n);
	numbers(1,n);
	printf("\n");
    reverse(n,1);
}

int numbers(int s,int n){
	if(s>n){
		return;	}
		printf("%d\t",s);
		numbers(++s,n);
}

int reverse(int p,int q){
	if(p<q){
		return;
	}
	printf("%d\t",p);
	reverse(--p,q);
}
