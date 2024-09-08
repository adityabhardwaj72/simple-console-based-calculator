#include <stdio.h>
/#include <math.h>
void standardCalculator()
{
    int choice;
    double num1, num2;

    printf("Standard Calculator Mode\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (choice)
    {
    case 1:
        printf("Result: %.2lf\n", num1 + num2);
        break;
    case 2:
        printf("Result: %.2lf\n", num1 - num2);
        break;
    case 3:
        printf("Result: %.2lf\n", num1 * num2);
        break;
    case 4:
        if (num2 != 0)
            printf("Result: %.2lf\n", num1 / num2);
        else
            printf("Error: Division by zero!\n");
        break;
    default:
        printf("Invalid choice!\n");
    }
}
