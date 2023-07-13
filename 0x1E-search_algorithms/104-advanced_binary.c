#include "search_algos.h"
/**
 * binary_recursive_search - searches recursively for a value in a sorted
 *	array of integers
 * @array: pointer to the first element of the array to search in
 * @left: starting index of the subarray
 * @right: end index of the sub-array
 * @value: value to search for
 * Return: index where value is located
 *	or -1 if value is not present in array or if array is NULL
 */
int binary_recursive_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);
	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return(binary_recursive_search(array, left, i, value));
	return(binary_recursive_search(array, i + 1, right, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 *	or -1 if value is not present in array or if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return(binary_recursive_search(array, 0, size - 1, value));
}
