#include "main.h"

/**
 * print_last_digit - Entry point
 * program to print the last digit of an integer
 * @n: value to be evaluated
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (n < 0)
	{
		lastDigit *= -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
