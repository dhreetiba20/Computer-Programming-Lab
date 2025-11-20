#include <stdio.h>

int sum_odd_n(int n) {
    if (n <= 0) {
        return 0;
    }
    return (2 * n - 1) + sum_odd_n(n - 1);
}

int main() {
    int n;
    printf("Enter the number of terms (N): ");
    scanf("%d", &n);

    if (n > 0) {
        int sum = sum_odd_n(n);
        printf("Sum of 1st %d odd numbers: %d\n", n, sum);
    } else {
        printf("N must be a positive integer.\n");
    }

    return 0;
}