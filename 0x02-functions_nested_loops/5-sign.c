#include "main.h"

/**
 * print_sign - Entry point
 * function that prints the sign of a number
 * @n: value to be evaluated
 * Return: 1 if number is greater than 0. -1 if number is less than 0 and 0 if number is 0.
 */
int print_sign(int n);
{
	if (n > 0)
	{
		_putchar(+);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(-);
	        return (-1);
	}
	{
		_putchar(0);
		return (0);
	}
}
