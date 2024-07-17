#include <stdio.h>
#include <string.h>
void main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input. Please enter a positive number of strings.\n");
     //   return 1;
    }
    char inputString[100];
    printf("Enter %d strings:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%s", inputString);
        if (inputString[0] == 'c' || inputString[0] == 'a') {
            printf("String starting with 'c' or 'a': %s\n", inputString);
        }
    }

}

