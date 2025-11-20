#include <stdio.h>
#include <string.h>  
#include <ctype.h>
int main() {
    char str[100];
    int i;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    for (i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
    printf("String in upper case: %s", str);
    return 0;
}