#include "main.h"

/**
 * print_line - Entry point
 * function that prints a line given n.
 * @n: value to be evaluated.
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	{
		int i;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
	}
}
