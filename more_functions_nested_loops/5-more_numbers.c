#include "main.h"
/**
 * more_numbers - function print except 2,4
 * main.h header file
 * Return:0
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('0' + j / 10);
			_putchar('0' + j % 10);
		}
		_putchar('\n');
	}
}