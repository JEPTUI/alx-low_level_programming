#include "main.h"
/**
 * rev_string - function that reverses string
 * @s: string
 */
void rev_string(char *s)
{
	char revstr = s[0];
	int length = 0;
	int i;

	while (s[length] != '\0')
		length++;
	for (i = 0; i < length; i++)
	{
		length--;
		revstr = s[i];
		s[i] = s[length];
		s[length] = revstr;
	}
}
