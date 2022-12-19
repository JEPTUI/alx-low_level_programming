#include "main.h"
/**
 * print_rev -  prints a string in reverse followed by a new line
 * @s: string
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		++s;
	}

	/* go back to the character before null */
	s--;

	for (i = length; i  > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
