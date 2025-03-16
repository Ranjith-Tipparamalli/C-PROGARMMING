#include <stdio.h>

int main() // starting of the program...
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a % 2 == 0) // if the remainder is equal to 0,, the number is even...
        printf("The given number is even.\n");
    else
    {
        printf("The given number is odd.\n");
    }

    return 0; // ending of the program...
}