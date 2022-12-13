#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int alpha;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
