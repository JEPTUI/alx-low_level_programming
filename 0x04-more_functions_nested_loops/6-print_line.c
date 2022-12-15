#include "main.h"
/**
 * print_line - draws straight line
 * @n: number of time the character should be printed
 *
 * Return: straight line
 */
void print_line(int n)
{
	int counter;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (counter = 1; counter <= n; counter++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
