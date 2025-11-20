#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int result;
    printf("Enter first string: ");
    fgets(str1, 100, stdin);
    printf("Enter second string: ");
    fgets(str2, 100, stdin);
    result = strcmp(str1, str2);
    if (result == 0) {
        printf("Both strings are same.\n");
    } else if (result > 0) {
        printf("First string is lexicographically greater (comes after).\n");
    } else {
        printf("Second string is lexicographically greater (comes after).\n");
    }
    return 0;
}