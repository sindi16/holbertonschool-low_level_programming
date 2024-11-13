#include "main.h"
#include <stdlib.h>

/**
* *array_range - func to simulate calloc
* @min: size of the array
* @max: size per element
* Return: ptr
*/

int *array_range(int min, int max)
{
	int *ptr;
	int nr_of_num;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	nr_of_num = max - min + 1;
	ptr = malloc(nr_of_num * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nr_of_num; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
