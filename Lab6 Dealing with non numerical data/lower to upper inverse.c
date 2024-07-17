#include <stdio.h>
void main() {
    char inputstr[100];

    printf("Enter a string: ");
    gets(inputstr);
    int i = 0;
    while (inputstr[i] != '\0') {
        if (inputstr[i] >= 'a' && inputstr[i] <= 'z') {
            inputstr[i] = inputstr[i] - 'a' + 'A';
        } else if (inputstr[i] >= 'A' && inputstr[i] <= 'Z') {
            inputstr[i] = inputstr[i] - 'A' + 'a';
        }
        i++;
    }
    printf("String with toggled case: %s\n", inputstr);
}

