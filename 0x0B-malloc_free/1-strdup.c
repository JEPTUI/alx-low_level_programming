#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a new string
 *	which is a duplicate of the string str
 *@str: string to duplicate
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *dup;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + i))
		len++, i++;
	len++;
	dup = malloc(sizeof(char) * len);

	if (dup == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(dup + i) = *(str + i);
		i++;
	}
	return (dup);
}
