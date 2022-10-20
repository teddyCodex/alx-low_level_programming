#include "main.h"

/**
 * print_numbers - Entry point
 * function that prints numbers from 0 to 9 using _putchar
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	char i;

	for (i = 0; i <= '9'; i++)
		_putchar(i);

	_putchar('\n');
}
