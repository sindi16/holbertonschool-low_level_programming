#include "main.h"

/**
* _memset -fills memory 
* @s: points to the memory
* @b: char to put
* @n: number of times to insert the char
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}