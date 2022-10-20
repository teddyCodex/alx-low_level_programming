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
	if (n < 98)
	{
		int a = n;

		for (; a <= 98; a++)
		{
			printf("%d", a);
			if (a == 98)
			{
				break;
			}
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	{
		int b = n;

		for (; b >= 98; b--)
		{
			printf("%d", b);
			if (b == 98)
			{
				break;
			}
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
