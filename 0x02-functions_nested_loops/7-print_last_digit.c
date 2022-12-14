#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: integer
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit < 0)
	{
		n *= -1;
	}
	_putchar((n % 10) + '0');

	return (n % 10);
}
