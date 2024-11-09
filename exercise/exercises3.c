#include <stdio.h>


int array2_(float array[], int size, float *sum, float *avg)
{	
	int i;
	*sum = 0.0;

	
	for (i = 0; i < size; i++)
	{
		*sum += array[i];
	}
	*avg = *sum / size;
		
}

int main()
{
	float array[] = {5.0, 3.5, 6.0, 2.5};
	int size = sizeof(array) / sizeof(array[0]);
	float sum = 0.0;
	float avg = 0.0;
	(array, size, &sum, &avg)
	printf("the sum of numbers in array is %.2f and average is %.2f", sum, avg);
	return (0);
}