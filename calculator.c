#include <stdio.h>
int main()
{
    double a, b, c;  //for representing integers...
    char oper;       //for representing operations...
    printf("enter 2 numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("select a operation(+,-,*,/): ");
    scanf(" %c", &oper);
    switch (oper)    //using "SWITCH" for efficiency...
    {
    case '+':
        c = a + b;
        break;
    case '-':
        c = a - b;
        break;
    case '*':
        c = a * b;
        break;
    case '/':
        if (b != 0)
            c = a / b;
        else
        {
            printf("Division by zero is not allowed.");
            return 1;    //immidetely stops the execution...
        }
        break;
    default:
        printf("Invalid operation. Please enter +, -, *, or /.");
        return 1;
    }
    printf("Therefore, result => %.2lf %c %.2lf = %.2lf\n",a, oper, b, c);
    return 0;    //end of the program...
}
