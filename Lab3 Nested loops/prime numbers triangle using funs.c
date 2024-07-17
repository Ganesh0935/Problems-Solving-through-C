#include <stdio.h>
int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    if (num <= 3) {
        return 1;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0;
    }
    int i = 5;
    while (i * i <= num) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;
        }
        i += 6;
    }
    return 1;
}
void print_pattern(int n) {
    if (n < 1) {
        return;
    }
    int num = 2;
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i - 1; j++) {
            printf("\t");
        }
        for (int j = 0; j < n - i + 1; j++) {
            while (!is_prime(num)) {
                num++;
            }
            printf("%d\t", num);
            num++;
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter n value");
    scanf("%d",&n);
    print_pattern(n);
    return 0;
}

