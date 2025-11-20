#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int a_count = 0, e_count = 0, i_count = 0, o_count = 0, u_count = 0;
    int i;
    char ch;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    for (i = 0; str[i] != '\0'; i++) {
        ch = tolower(str[i]);
        switch (ch) {
            case 'a':
                a_count++;
                break;
            case 'e':
                e_count++;
                break;
            case 'i':
                i_count++;
                break;
            case 'o':
                o_count++;
                break;
            case 'u':
                u_count++;
                break;
        }
    }
    printf("Frequency of each vowel:\n");
    printf("A: %d\n", a_count);
    printf("E: %d\n", e_count);
    printf("I: %d\n", i_count);
    printf("O: %d\n", o_count);
    printf("U: %d\n", u_count); 
    return 0;
}