#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 *	using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 *	or -1 if array is NULL or value is not present in array
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, l, r;

	if (!array)
		return (-1);
	for (l = 0, r = size - 1; r >= l;)
	{
		pos = l + (((double)(r - l) / (array[r] - array[l]))
				* (value - array[l]));
		if (pos < size)
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			r = pos - 1;
		else
			l = pos + 1;
	}
	return (-1);
}
