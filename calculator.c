// CALCULATOR IN C

#include <stdio.h>
#include <string.h> // string library
#include <math.h>   // math library

double add(double a, double b)
{
    return a + b;
}

double sub(double a, double b)
{
    return a - b;
}

double multi(double a, double b)
{
    return a * b;
}

double div(double a, double b)
{
    return a / b;
}

double mod(double a, double b)
{
    return fmod(a, b);
}

double expo(double a, double b)
{
    return pow(a, b);
}

int main()
{
    double num1;
    double num2;
    int operator;
    double answer;

    printf("\n\n--- Calculator ---");
    printf("\n\nWhich operator do you want to use?\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Remainder/MOD\n6. Exponent\nEnter INT here:\t");
    scanf("%d", &operator);

    printf("\nEnter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("\n");

    switch (operator)
    {
    case 1:
        answer = add(num1, num2);
        printf("The result of %.2lf + %.2lf = %.2lf", num1, num2, answer);
        break;
    case 2:
        answer = sub(num1, num2);
        printf("The result of %.2lf - %.2lf = %.2lf", num1, num2, answer);
        break;
    case 3:
        answer = multi(num1, num2);
        printf("The result of %.2lf × %.2lf = %.2lf", num1, num2, answer);
        break;
    case 4:
        answer = div(num1, num2);
        printf("The result of %.2lf ÷ %.2lf = %.2lf", num1, num2, answer);
        break;
    case 5:
        answer = mod(num1, num2);
        printf("The result of %.2lf MOD// %.2lf = %.2lf", num1, num2, answer);
        break;
    case 6:
        answer = expo(num1, num2);
        printf("The result of %.2lf POW^ %.2lf = %.2lf", num1, num2, answer);
        break;
    default:
        printf("Invalid operator selected.\n");
        break;
    }

    return 0;
}