#include <stdio.h>
void main() {
    int n,first=0,second=1,seq;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series up to %d terms:",n);
    printf("%d ,%d ",first,second);
    for (int i=3;i<=n;i++){
        seq=first+second;
        printf(",%d ",seq);
        first=second;
        second=seq;
    }
    printf("\n");
}

