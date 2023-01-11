#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - splits a string into words
 * @str: string argument
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	int num_words = 0, word_len, i, j, k;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; str[i]; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			num_words++;
	words = malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
		return (NULL);
	word_len = 0;
	j = 0;
	for (i = 0; str[i]; i++)
		if (str[i] != ' ')
			word_len++;
	if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
	{
		words[j] = malloc(sizeof(char) * (word_len + 1));
		if (words[j] == NULL)
		{
		for (k = 0; k < j; k++)
			free(words[k]);
	free(words);
	return (NULL);

	k = 0;
	while (str[i - k] != ' ')
	{
		words[j][k] = str[i - k];
		k++;
	}
	words[j][k] = '\0';
	j++;
	word_len = 0;
		}
	}
	words[j] = NULL;
	return (words);
}
