#include "main.h"
/**
 *
 * main - print alphabet in lowercase
 *
 * Return: Always 0 (Success).
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
