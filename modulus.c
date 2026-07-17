#include <stdio.h>

int main()
{
    int a , b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Modulus = %d\n", a%b);

    return 0;

}