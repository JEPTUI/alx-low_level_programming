#include "main.h"
/**
 * main - write function that checks for lowercase character
 *
 * Return: 1 if c is lowercase else 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
