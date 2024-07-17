#include <stdio.h>
#include <string.h>
void main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input.\n");
//        return 1;
    }
    char strings[n][100];
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                char temp[100];
                strcpy(temp, strings[i]);
                strcpy(strings[i], strings[j]);
                strcpy(strings[j], temp);
            }
        }
    }
    printf("Strings in dictionary order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }
}

