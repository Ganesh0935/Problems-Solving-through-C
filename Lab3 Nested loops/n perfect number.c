#include <stdio.h>
int main() {
    int n, i, j, sum, count;
    printf("Enter the value of 'n': ");
    scanf("%d", &n);
    if (n >= 1) {
        printf("First %d perfect numbers are:\n", n);
        i = 2;
        count = 0;
        while (count < n) {
            sum = 1;
            for (j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    sum += j;
                }
            }
            if (sum == i) {
                printf("%d ", i);
                count++;
            }
            i++;
        }
        printf("\n");
    } else {
        printf("Invalid input. Please enter a positive integer greater than or equal to 1.\n");
    }
    return 0;
}

