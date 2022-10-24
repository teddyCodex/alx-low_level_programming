#include "main.h"

/**
 * _strlen - function to check and return string length
 * @s: string to be evaluated
 * Return: Always void.
 */

int _strlen(char *s)
{
	int len = 0;
	while(s[len] != '\0')
		len++;
	return len;
}
