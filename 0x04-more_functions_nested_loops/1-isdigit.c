#include "main.h"

/**
 * _isdigit - Entry point
 * function to check for a digit (0 thru 9)
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
