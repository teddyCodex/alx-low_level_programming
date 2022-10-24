#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: string to be evaluated
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
		i++;
		_puts(str[i]);
}
