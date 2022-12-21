#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store result
 * @size_r: buffer size
 *
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, n1_length = 0, n2_length = 0;

	for (i = 0; *(n1 + i); i++)
		n1_length++;

	for (i = 0; *(n2 + i); i++)
		n2_length++;
	
	if (size_r <= n1_length + 1 || size_r <= n2_length + 1)
		return (0);

	n1 += n1_length - 1;
	n2 += n2_length - 1;
	*(r + size_r) = '\0';

	return (infinite_add(n1, n2, r, --size_r));
}
