#include <stdio.h>
#include <string.h>
void main() {
    char inputString[100];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    if (inputString[strlen(inputString) - 1] == '\n') {
        inputString[strlen(inputString) - 1] = '\0';
    }
    char *token;
    char *words[100];
    char delimiters[] = " ";
    int count = 0;
    token = strtok(inputString, delimiters);
    while (token != NULL) {
        words[count] = token;
        count++;
        token = strtok(NULL, delimiters);
    }
    printf("Reversed string: ");
    for (int i = count - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i > 0) {
            printf(" ");
        }
    }
    printf("\n");
    
}
