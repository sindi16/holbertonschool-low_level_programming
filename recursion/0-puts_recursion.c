#include "main.h"

/**

* Return void
*/
void _puts_recursion(char *s)
{
	if (*s == '\n')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
