#include "main.h"
/**
 * _strncat - concatenates two strings using at most n bytes
 * @dest: string to be concatenate upon
 * @src: source string
 * @n: number of bytes from source string
 *
 * Return: pointers to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_length = 0;

	while (dest[i++])
		dest_length++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_length++] = src[i];

	return (dest);
}
