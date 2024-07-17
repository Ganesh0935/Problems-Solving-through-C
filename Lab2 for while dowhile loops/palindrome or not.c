#include <stdio.h>
void main() {
    int num,result,reverse=0,r;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = num;
    while (num!= 0) {
        r=num%10;
        reverse=reverse*10+r;
        num/=10;
    }
    if (result==reverse){
        printf("%d is a palindrome.\n", result);
    } else{
        printf("%d is not a palindrome.\n", result);
    }
    
    
}



