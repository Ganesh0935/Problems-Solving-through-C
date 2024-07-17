#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Invalid input. Please enter at least two elements.\n");
        return 1;
    }

    int numbers[n];

    // Input the array elements
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int firstMin, secondMin, firstMax, secondMax;

    if (numbers[0] < numbers[1]) {
        firstMin = numbers[0];
        secondMin = numbers[1];
        firstMax = numbers[1];
        secondMax = numbers[0];
    } else {
        firstMin = numbers[1];
        secondMin = numbers[0];
        firstMax = numbers[0];
        secondMax = numbers[1];
    }

    for (int i = 2; i < n; i++) {
        if (numbers[i] < firstMin) {
            secondMin = firstMin;
            firstMin = numbers[i];
        } else if (numbers[i] < secondMin && numbers[i] != firstMin) {
            secondMin = numbers[i];
        }

        if (numbers[i] > firstMax) {
            secondMax = firstMax;
            firstMax = numbers[i];
        } else if (numbers[i] > secondMax && numbers[i] != firstMax) {
            secondMax = numbers[i];
        }
    }

    printf("Second smallest element: %d\n", secondMin);
    printf("Second largest element: %d\n", secondMax);

 //   return 0;
}

