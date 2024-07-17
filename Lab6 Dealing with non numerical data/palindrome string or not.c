#include <stdio.h>
#include <string.h>
void main() {
    char inputString[100];
    printf("Enter a string: ");
    gets(inputString);
    int length = strlen(inputString);
    int isPalindrome = 1;
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        if (inputString[i] != inputString[j]) {
            isPalindrome = 0; 
            break;
        }
    }
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
}

