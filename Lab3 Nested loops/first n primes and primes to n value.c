#include <stdio.h>

int isPrime(int num){
    if(num<=1){
        return 0;
    }
    for(int i=2;i*i<=num;i++) {
        if (num%i==0) {
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Prime numbers up to %d: ", n);
    for (int i=2;i<=n;i++) {
        if (isPrime(i)){
            printf("%d, ",i);
        }
    }
    printf("\n");
    int count=0;
    int num=2;
    printf("First %d prime numbers: ",n);
    while (count<n) {
        if (isPrime(num)){
            printf("%d, ",num);
            count++;
        }
        num++;
    }
    printf("\n");
}

