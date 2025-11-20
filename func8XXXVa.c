#include <stdio.h>

int inner_loop_recursive(int i, int j) {
    if (j > 3) {
        return 0;
    }
    printf("%d %d\n", i, j);
    inner_loop_recursive(i, j + 1);
    return 0;
}
int outer_loop_recursive(int i) {
    if (i > 2) {
        return 0;
    }
    inner_loop_recursive(i, 1);
    outer_loop_recursive(i + 1);
    return 0;
}

int main() {
    outer_loop_recursive(1);
    return 0;
}