#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character
 * @str: string to be evaluated
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i = 0;

	while (i % 2 == 0)
	{
		i++;
		_putchar(str[i]);
	}
	_putchar('\n');
}
