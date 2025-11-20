#include<stdio.h>
int main()
{
    int Principal ;
    printf("Enter the principal value :");
    scanf("%d", &Principal);
    float Rate , Number ;
    printf("Enter the rate of interest :");
    scanf("%f", &Rate);
    printf("Enter the number of years :");  
    scanf("%f", &Number);
    float  Interest = (Principal*Rate*Number)/100;
    printf("The value of Interest is %f", Interest);
    return 0;
}
