#include<stdio.h> 
void main()
{
	int rows,cols;
	printf("Enter no of rows");
	scanf("%d",&rows);
	printf("Enter no of cols");
	scanf("%d",&cols);
	int matrix[rows][cols],transpose[cols][rows];
	printf("Enter the elements of index \n");
	for (int i=0 ;i<rows;i++){
		for (int j=0;j<cols;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("in actual matrix \n");
	for (int i=0;i<rows;i++){
		for (int j=0;j<cols;j++){
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	for (int i=0;i<rows;i++){
		for (int j=0;j<cols;j++){
			transpose [i][j]=matrix[j][i];
		}
	}
	
	
	printf("in transpose matrix \n");
	for (int i=0;i<rows;i++){
		for (int j=0;j<cols;j++){
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}
}
