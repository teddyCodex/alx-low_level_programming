#include "main.h"

/**
 * check - checks the square root
 * @a: int
 * @b: int
 * Return: int
 */

int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - returns natural sqrt of a num
 * @n: int to evaluate
 * Return: natureal sqrt or -1
 */

int _sqrt_recursion(int n)
{
	if (n == )
		return (0);
	return (check(1, n));
}
