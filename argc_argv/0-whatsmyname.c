#include <stdio.h>

/**
* main - entry point that prints its name.
* @argc: holds value for output
* @argv: holds value fpr output
* Return: 0
*/
int main(int argc, char *argv[])
{
    (void) argc;

    printf("%s\n", argv[0]);

    return (0);
}