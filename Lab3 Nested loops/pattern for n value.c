#include <stdio.h>
void main(){
    int n;
    printf("Enter the n rows for the diamond: ");
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            printf("\t");
        }
        for (int j=1;j<=2*i-1;j++){
            printf("\t*");
        }
        printf("\n");
    }
    for (int i=n-1;i>=1;i--){
        for (int j=1;j<=n-i;j++){
            printf("\t");
        }
        for (int j=1;j<=2*i-1;j++) {
            printf("\t*");
        }
        printf("\n");
    }
   
}

