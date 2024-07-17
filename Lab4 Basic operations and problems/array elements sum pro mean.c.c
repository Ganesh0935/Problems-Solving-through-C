#include <stdio.h>
main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. \n");
        return 1;
    }

    int numbers[n];
    int sum = 0;
    int product = 1;

    // Input the array elements
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
        product *= numbers[i];
    }

    // Calculate the mean
    float mean = (float)sum / n;

    printf("Sum of numbers: %d\n", sum);
    printf("Product of numbers: %d\n", product);
    printf("Mean of numbers: %.2f\n", mean);
   //  return 0;
}

