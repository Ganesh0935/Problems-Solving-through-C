#include <stdio.h>
#include <ctype.h>
void main() {
    char inputString[100];
    int vowels = 0, consonants = 0, digits = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", inputString);
    for (int i = 0; inputString[i] != '\0'; i++) {
        char ch = tolower(inputString[i]);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(ch)) {
            digits++;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    
}

