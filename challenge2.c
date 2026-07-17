#include <stdio.h>
int main()
{
    int age;
    int marks;
    int favorite_number;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your marks: ");
    scanf("%d", &marks);
    printf("Enter your favorite number: ");
    scanf("%d", &favorite_number);

    printf("Your age is %d\n", age);
    printf("Your marks are %d\n", marks);
    printf("Your favorite number is %d\n", favorite_number);

    return 0;
    
}