#include "main.h"
int squareroot(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number argument
 * Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (squareroot(n, 0));
}
/**
 * squareroot - checks if perfect square
 * @n: input
 * @i: counter
 * Return: if squareroot
 */
int squareroot(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (squareroot(n, i + 1));
}
