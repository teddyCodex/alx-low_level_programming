#include "main.h"

/**
 * print_numbers - Entry point
 * function that prints numbers from 0 to 9 using _putchar
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
