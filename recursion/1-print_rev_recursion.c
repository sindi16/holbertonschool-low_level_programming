#include "main.h"

/*
* - a function that prints a string in reverse.
* 

*/
void _puts_recursion(char *)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}