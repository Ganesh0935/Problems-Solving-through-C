#include<stdio.h>

typedef struct student
{
	int REGID;
	char name[20];
	float CGPA;
	struct add{
		char village[50];
		char district[50];
	}address;
	int ph;
};
void main(){

	int n;
	printf("Enter the no of students:");
	scanf("%d",&n);
    struct student students[n];
	
for(int i=0;i<n;i++){
	printf("Enter REGID,Name,CGPA,Address-Village,District,Phno:");
 scanf("%d%s%f%s%s%d",&students[i].REGID,&students[i].name,&students[i].CGPA,&students[i].address.village,&students[i].address.district,&students[i].ph); }
printf("Topper among the students");

struct student topper=students[0];
//float maxCGPA=students[0].CGPA;
//struct student maxCGPA=students[0]

for(int i=0;i<n;i++){
	if(students[i].CGPA > topper.CGPA){
	//	maxCGPA=students[i];
	//	printf("%s is topper",students[i].name);
	topper=students[i];
	}
printf("%s is the topper",topper.name);
}
 
}
