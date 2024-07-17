#include <stdio.h>
int mul(int a, int b) {
    int result = 0;
    int sign = (a < 0) ^ (b < 0) ? -1 : 1;
    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;
    while (b > 0) {
        if (b & 1) {
            result += a;
        }
        a <<= 1;
        b >>= 1;
    }
    return sign == 1 ? result : -result;
}
int div(int a, int b){
    if (b == 0) {
        printf("Division by zero is not allowed.\n");
        return -1;
    }
    int result = 0;
    int sign = (a < 0) ^ (b < 0) ? -1 : 1;
    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;
    while (a >= b) {
        a -= b;
        result++;
    }
    return sign == 1 ? result : -result;
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int multiplication = mul(num1, num2);
    int division = div(num1, num2);
    printf("Multiplication without * operator: %d\n", multiplication);
    if (division != -1) {
        printf("Division without / operator: %d\n", division);
    }
    return 0;
}

