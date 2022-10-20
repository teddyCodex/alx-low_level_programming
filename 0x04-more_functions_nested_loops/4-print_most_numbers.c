#include "main.h"

/**
 * print_most_numbers - Entry point
 * function to print numbers from 0 to 9 excluding 2 and 4
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
