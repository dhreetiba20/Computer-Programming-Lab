#include <stdio.h>
#include <string.h>  
#include <ctype.h>  
int main() {
    char str[100];
    int i;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    for (i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
    printf("String in lower case: %s", str);
    return 0;
}