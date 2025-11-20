#include <stdio.h>

int main() {
    float x , y;
    printf("Enter two numbers :");
    scanf("%f %f" , &x , &y);
    printf("The addition of the two numbers x and y is %f\n",x+y);
    printf("The subtraction of the two numbers x and y is %f\n",x-y);
    printf("The multiplication of the two numbers x and y is %f\n",x*y);
    printf("The division of the two numbers x and y is %f\n",x/y);
    return 0;
}