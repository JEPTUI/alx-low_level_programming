#include "main.h"
#include <stdio.h>
/**
 * _abs - compute absolute value of an integer
 * @n: integer
 *
 * Return: Absolute value.
 */
int _abs(int n)
{

	if (n < 0)
	{
		return (-n);
	}
	else if (n > 0)
	{
		return (n);
	}
	return (0);
}
