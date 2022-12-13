#include "main.h"
/**
 * main - print alphabet in lowercase
 *
 * Return: Always 0 (Success).
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		print_alphabet(alpha);
	}
	_putchar('\n');
}
