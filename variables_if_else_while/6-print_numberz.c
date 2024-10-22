#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int i;

    for (i = 0; i <= 9; i++)
    {
        putchar(i + '0'); // Convert integer to character
    }

    putchar('\n'); // Print a newline

    return (0);
}