#include "main.h"
int is_prime(int n, int i);
/**
 * is_prime_number - find prime numbers
 * @n: number to check
 * Return: 1 if prime number and 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime(n, 2));
}
/**
 * is_prime - recursively divide by higher nums
 * @n: number to check if prime
 * @i: divisor
 * Return: 1 if prime, 0 if not or recursive function call
 */
int is_prime(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime(n, i + 1));
}
