#include<stdio.h>
void main(){
	int n,i,j,y,x=2;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf("\t");}
		for(j=1;j<=i;j++){
			while(1){
				int m=1;
				for(y=2;y*y<=x;y++){
					if(x%y==0){
						m=0;
						break;}
				
				}
				if(m){
					break;
				}
				x++;
			}
			printf("%d\t",x);
			x++;
		}
		printf("\n");
	}
}
