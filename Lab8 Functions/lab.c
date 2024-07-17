#include<stdio.h>
int main(){
	int n,total,capacity,avg;
	printf("Enter total no of persons in campus:");
	scanf("%d",&total);
	printf("Enter amount of food for each person:");
	scanf("%d",&capacity);
	int humanNeed[n];
	printf("Enter no of houses:");
	scanf("%d",&n);
	
	int sum=0;
	for(int i=0;i<n;i++){
		printf("Enter food available:");
		scanf("%d",&humanNeed[i]);
		sum+=humanNeed[i];
	}
	avg =sum/n;
	printf("%d is total amount of food available",sum);
	int foodneed;
	foodneed=total*capacity;
	
	if(humanNeed == NULL){
		return (-1);
	}
	else if(sum < foodneed){
		n=foodneed/avg;
		n=n+1;
		printf("%d no of houses required to fulfill hunger of all persons",n);
	}
	else{
		printf("Available food is morethan enough");
		
	}
	for(int j=0;j<n;j++){
		printf("%d is house no",j+1);
	}
	return 0;
}

