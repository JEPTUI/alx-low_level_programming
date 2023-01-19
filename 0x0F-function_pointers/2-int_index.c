#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: array of elements
 * @size: number of elements in an array
 * @cmp: pointer to the function used to compare values
 * Return: index of the first element for which the cmp
 *	 function does not return 0 else -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if ((*cmp)(array[i]) != 0)
			return (i);
	return (-1);
}
