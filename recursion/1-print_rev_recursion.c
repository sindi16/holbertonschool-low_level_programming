#include "main.h"

/**
* _puts_recursion - a function that prints a string
* followed by a new line
* @s: a string
* Return void. 
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}