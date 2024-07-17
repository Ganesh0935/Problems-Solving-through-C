#include <stdio.h>
// Function to calculate the length of a string
int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    } 
    return length;
}
// Function to copy one string to another
void stringCopy(char *destination, const char *source) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}
// Function to concatenate two strings
void stringConcatenate(char *destination, const char *source) {
    int destLength = stringLength(destination);
    int i = 0;
    while (source[i] != '\0') {
        destination[destLength + i] = source[i];
        i++;
    }
    destination[destLength + i] = '\0';
}
// Function to convert a string to uppercase
void stringToUppercase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }
}
// Function to compare two strings
int stringCompare(const char *str1, const char *str2) {
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return 0;
}
int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    printf("Length of the first string: %d\n", stringLength(str1));
    char copiedString[100];
    stringCopy(copiedString, str1);
    printf("Copied String: %s\n", copiedString);
    stringConcatenate(str1, str2);
    printf("Concatenated String: %s\n", str1);
    stringToUppercase(str1);
    printf("Uppercase String: %s\n", str1);
    int comparisonResult = stringCompare(str1, str2);
    if (comparisonResult < 0) {
        printf("Strings are not equal. First string is less than the second.\n");
    } else if (comparisonResult > 0) {
        printf("Strings are not equal. First string is greater than the second.\n");
    } else {
        printf("Strings are equal.\n");
    }
    return 0;
}

