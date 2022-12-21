#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to string to be concatenated on
 * @src: source string to append
 *
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, dest_length = 0;

	while (dest[i++])
		dest_length++;

	for (i = 0; src[i]; i++)
		dest[dest_length++] = src[i];

	return (dest);
}
