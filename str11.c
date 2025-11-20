#include <stdio.h>
#include <string.h> 
int main() {
    char str[100];
    int len, i;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    len = strlen(str);
    if (str[len - 1] == '\n') {
        len--;
    }
    printf("Reversed string printed vertically:\n");
    for (i = len - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }
    return 0;
}