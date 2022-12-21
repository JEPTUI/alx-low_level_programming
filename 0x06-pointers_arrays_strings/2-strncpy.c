#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: string to copy
 * @src: source string
 * @n: number of bytes to be copied from string
 *
 * Return: a pointer to the string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_length = 0;

	while (src[i++])
		src_length++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_length; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
