#include <stdio.h>
void main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Factors of the given number are: ");
    for (int i=1;i<=number;i++){
        if (number % i == 0){
            printf("%d\n",i);
        }
    }
}

