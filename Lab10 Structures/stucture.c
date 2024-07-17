#include<stdio.h>
struct State {
	int sno;
	struct name{
		char num[30];
		char head[30];
	}n1;
	char capital[30];
};
int main(){
	struct State s1,s2;
	printf("Enter sno:");
	scanf("%d",&s1.sno);
	printf("What is AP capital:");
	scanf("%s",s1.capital);
		
	printf("Enter your District:");
	scanf("%s",s1.n1.num);
	
	printf("Enter your District Headquaters:");
	scanf("%s",s1.n1.head);
	
	
	printf("%d.According to you, AP capital is %s\n",s1.sno,s1.capital);
	printf("Your District is %s\n",s1.n1.num);
	printf("Your District Headquaters is %s\n",s1.n1.head);

return 0;
}
