#include "main.h"

/**
 * print_rev - function that reverses a string
 * @s: string to be evaluated
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
		{
			break;
		}
		i++;
	}
	for (i--; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
