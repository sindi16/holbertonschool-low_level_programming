#include "main.h"

/*
* _strlen_recursion - a function that returns the length of a string
* @s: a string
* Return length.
*/
int _strlen_recursion(char *s) // recursice function for a string
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));

}
