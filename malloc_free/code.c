#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2D array of integers
 * @width: Width of the 2D array
 * @height: Height of the 2D array
 * Return: Pointer to the new array, or NULL
 */
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	
	array = malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);
	
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
			return (NULL);
	}
	
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);

}