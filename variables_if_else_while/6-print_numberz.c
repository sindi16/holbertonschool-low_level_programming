#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int digit;

    for (digit = 0; digit <= 9; digit++)
    {
        putchar(digit + '0'); // Convert integer to character
    }

    putchar('\n'); // Print a newline

    return (0);
}