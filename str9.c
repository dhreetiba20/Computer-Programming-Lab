#include <stdio.h>
#include <string.h> 
int main() {
    char str1[200];
    char str2[100];
    printf("Enter the first string (destination): ");
    fgets(str1, 200, stdin);
    printf("Enter the second string (source): ");
    fgets(str2, 100, stdin);
    str1[strlen(str1) - 1] = '\0';
    strcat(str1, str2);
    printf("Concatenated string: %s", str1);
    return 0;
}