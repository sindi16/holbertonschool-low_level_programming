#include "main.h"
/**
* print_rev - prints string in reverse
* @s: - point to respective string
*/
void print_rev(char *s)
{
	int i, count;

	count = 0;
	while (s[count] != '\0')
		count++;
	for (i = count - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
