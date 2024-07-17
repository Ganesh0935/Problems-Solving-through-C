#include <stdio.h>
typedef struct{
	int regID;
    char name[50];
    float CGPA;
    char addressVillage[50];
    char district[50];
    char phoneNumber[15];
} Student;
int main() {
    int n;
	printf("Enter the number of students: ");
    scanf("%d", &n);
    Student student[100];
	for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Reg ID: "); scanf("%d", &student[i].regID);
        printf("Name: "); scanf("%s", student[i].name);
		printf("CGPA: "); scanf("%f", &student[i].CGPA);
		printf("Address (Village): "); scanf("%s",student[i].addressVillage);
		printf("District: "); scanf("%s", student[i].district);
		printf("Phone Number: "); scanf("%s", student[i].phoneNumber);
    }
   // Ewww Topper
    float maxCGPA = student[0].CGPA;
    for(int i=1; i<n; i++){
    	if(student[i].CGPA > maxCGPA){
    		maxCGPA = student[i].CGPA;
		}
	}
    //creating array to store the regID's
    int id[n];
    for(int i=0;i<n;i++){
    	id[i]=student[i].regID;
	}
    //sorting the array
    for(int i=0;i<n;i++){
    	for(int j=i+1;j<n;j++){
    		if(id[j-1]>id[j]){
    			int temp=id[j-1];
    			id[j-1]=id[j];
    			id[j]=temp;
			}
		}
	}
	
	//printing the students
	printf("\n\n\t\t\tSTUDENT DETAILS:");
	int c=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(id[i]==student[j].regID){
				printf("\nStudent %d\n",c);
				printf("regID: %d\n",student[j].regID);
				printf("Name: %s\n", student[j].name);
				printf("CGPA: %f\n",student[j].CGPA);
				printf("Address: %s, %s\n",student[j].addressVillage,student[j].district);
				printf("Phone Number: %d",student[j].phoneNumber);
				c++;				
			}		
		}
	}
    return 0;
}