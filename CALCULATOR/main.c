#include <stdio.h>
#include "Calculator.h"

int main() {
    double num1, num2, result;
    char operation;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Input the operation
    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &operation);

    // Perform the calculation
    switch (operation) {
        case '+':
            result = add(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = subtract(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = multiply(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = divide(num1, num2);
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operation.\n");
    }

    return 0;
}
