#include <stdio.h>
#include "Calculator.h"

int main() {
    double num1, num2, result;
    char operation;

    // Input two numbers
    printf("Enter the first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Error: Invalid input for the first number.\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Error: Invalid input for the second number.\n");
        return 1;
    }

    // Input the operation
    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &operation);

    // Perform the calculation
    if (operation == '+')
    {
        result = add(num1, num2);
        printf("Result: %.2lf\n", result);
    }
     else if (operation == '-') 
    {
        result = subtract(num1, num2);
        printf("Result: %.2lf\n", result);
    } 
    else if (operation == '*') 
    {
        result = multiply(num1, num2);
        printf("Result: %.2lf\n", result);
    } 
    else if (operation == '/') 
    {
        if (num2 != 0) {
            result = divide(num1, num2);
            printf("Result: %.2lf\n", result);
        } 
        else 
        {
            printf("Error: Division by zero is not allowed.\n");
        }
    } 
    else 
    {
        printf("Error: Invalid operation. Please use one of (+, -, *, /).\n");
    }

    return 0;
}
