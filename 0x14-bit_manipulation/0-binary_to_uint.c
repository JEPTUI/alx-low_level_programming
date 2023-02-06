#include "main.h"

/**
 * binary_to_uint - converts binary to an unsigned int
 * @b: pointer to a string of 0 and 1
 * Return: Converted number or
 *	0 if otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int length = 0, i;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	while (b[length] != '\0')
		length++;
	length -= 1;

	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') & (b[i] != '1'))
			return (0);
		if (b[i] == '1')
			sum += (1 * (1 << length));
		i++;
		length--;
	}
	return (sum);
}
