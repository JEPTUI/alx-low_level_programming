#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: The number to print
 *
 * Return: 1 if n is greater than 0
 * If n is zero return 0
 * If n is less than zero return -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
