#include "main.h"

/**
 * print_numbers - Entry point
 * function that prints numbers from 0 to 9 using _putchar
 * @i: value to be evaluated
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= '9'; i++)
		_putchar(i);

	_putchar('\n');
}
