#include<stdio.h>
int main()
{
    float num1, num2;
    char op;
    printf("Enter the two values: \n");
    scanf("%c",&op);

    switch(op)
    {
        case '+':
            printf("Addition of two numbers is: %f\n", num1 + num2);
            break;
        case '-':
            printf("Subtraction of two numbers is: %f\n", num1 - num2);
            break;
        case '*':
            printf("Multiplication of two numbers is: %f\n", num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("Division of two numbers is: %f\n", num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }
}