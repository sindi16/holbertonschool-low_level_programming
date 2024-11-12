#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* *str_concat - a function that concatenates two strings
* @s1: 
* @s2:
* 
*/

char *str_concat(char *s1, char *s2)
{
    int i, j, size;
    char *result;
	
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    i = 0;
    while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;
	size = i + j;

	result = malloc(size * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		result[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		result[i + j] = s2[j];

	return (result); 
	
}
