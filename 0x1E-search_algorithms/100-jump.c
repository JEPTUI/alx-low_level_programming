#include "search_algos.h"
/**
 * jump_search -  searches for a value in a sorted array of integers
 *	using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 *	or -1 if array is NULL or not present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, jump = 0, l;

	if (!array || size == 0)
		return (-1);
	l = sqrt(size);
	for (; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += l;
	}
	printf("Value found between indexes[%lu] and [%lu]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
