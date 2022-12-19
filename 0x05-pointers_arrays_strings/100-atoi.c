#include "main.h"
/**
 * _atoi - converts string to an integer
 * @s: string
 *
 * Return: on success the integer value of converted string
 * 0 if there are no numbers in the string
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
