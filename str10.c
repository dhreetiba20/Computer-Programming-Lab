#include <stdio.h>

int main() {
    char str[100];
    int i;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    printf("Characters printed vertically:\n");
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {
            printf("%c\n", str[i]); 
        }
    }
    return 0;
}