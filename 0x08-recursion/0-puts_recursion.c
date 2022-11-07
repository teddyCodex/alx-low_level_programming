#include "main.h"

/**
 * _puts_recursion - print a string
 * @s: string
 * Return: void
 */

void _puts_recusrion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
