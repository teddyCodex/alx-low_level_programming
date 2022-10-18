#include "main.h"

/**
 * _isalpha - Entry point
 * function to check for alphabetic character
 * @c: value to be checked
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	} else
	{
		return (0);
	}
}
