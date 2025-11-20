#include <stdio.h>
#include <string.h> 
int main() {
    char str1[100];
    char str2[100]; 
    printf("Enter the source string: ");
    fgets(str1, 100, stdin);
    strcpy(str2, str1); 
    printf("Source string (str1): %s", str1);
    printf("Copied string (str2): %s", str2);
    return 0;
}