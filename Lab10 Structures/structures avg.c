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
    Student students[100];
	   
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

		printf("Reg ID: ");
        scanf("%d", &students[i].regID);
        
		printf("Name: ");
        scanf("%s", students[i].name);

        printf("CGPA: ");
        scanf("%f", &students[i].CGPA);

        printf("Address (Village): ");
        scanf("%s", students[i].addressVillage);

        printf("District: ");
        scanf("%s", students[i].district);

        printf("Phone Number: ");
        scanf("%s", students[i].phoneNumber);
    }

    // Average of CGPA
    float sum = 0.0;
    for(int i=0; i<n; i++){
    	sum += students[i].CGPA;
	}
	float avg = sum/(float)n;
    printf("\n\n\n\t\tPhone numbers List\n");
    
	int count = 1;
	for(int i=0; i<n; i++){
    	if(students[i].CGPA >= avg){
    		printf("%d - %s\n",count students[i].phoneNumber);
    		count++;
		}
	}
    
    return 0;
}