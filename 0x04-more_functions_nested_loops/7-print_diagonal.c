#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of time character \ should be printed
 *
 * Return: diagonal line
 */
void print_diagonal(int n)
{
	int space;
	int counter;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (counter = 1; counter <= n; counter++)
		{
			for (space = 1; space <= counter; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
