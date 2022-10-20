#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 * function that prints all natural numbers from n to 98
 * followed by a comma and space
 * @n: integer to start count
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		printf("%d, ", n);
	}
}
