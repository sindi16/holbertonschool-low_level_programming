#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>

/**
 * print_numbers -entry point,prints numbers
 * @separator: -points to the respective char
 * @n: -holds value for output
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;


	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
