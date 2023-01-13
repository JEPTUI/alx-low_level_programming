#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: values of the array
 * @max: array value
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = min + i;

	return (ptr);
}
