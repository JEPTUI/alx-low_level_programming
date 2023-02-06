#include "main.h"

/**
 * flip_bits - returns number of bits needed to
 *	flip from one number to another.
 * @n: number of bits
 * @m: number to flipn to
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			count++;
		m = m >> 1;
		n = n >> 1;
	}

	return (count);
}
