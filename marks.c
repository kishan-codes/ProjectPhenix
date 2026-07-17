#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks; ");
    scanf("%d", &marks);

    if (marks >=90)
    {
        printf("Excellent!\n");
    }
    else
    {
        printf("Keep Practicing!\n");
    }
    return 0;
}