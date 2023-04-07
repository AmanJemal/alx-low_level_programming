#include "main.h"

/**
 * exponent_opr - a func returns the natural square root of a number.
 * @n: input number.
 * @i: iterator.
 * Return: square root or -1.
 */
int exponent_opr(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + exponent_opr(n, i + 1));
}
/**
 * _sqrt_recursion - a func returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (exponent_opr(n, 2));
}
