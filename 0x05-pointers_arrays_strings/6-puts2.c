#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character
 * @str: string to be evaluated
 * Return: Always 0.
 */

void puts2(char *str)
{
	int len, i = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	while (i < len)
	{
		i += 2;
		_putchar(str[i]);
	}
	_putchar('\n');
}
