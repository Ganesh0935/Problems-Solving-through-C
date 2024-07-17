#include <stdio.h>
void main() {
    int n, i, j, coef = 1;
    printf("Enter the number of rows (n) for Pascal's triangle: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }
    printf("Pascal's Triangle for %d rows:\n", n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            printf("   ");
        }
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                coef = 1;
            } else {
                coef = coef * (i - j + 1) / j;
            }
            printf("%6d", coef);
        }

        printf("\n");
    }
 
}

