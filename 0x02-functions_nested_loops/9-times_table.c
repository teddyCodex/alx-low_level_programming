#include "main.h"

/**
 * times_table - Entry point
 * print 9 times table
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int rows, cols, prod, tens, ones;

	rows = 0;
	while (rows <= 9)
	{
		cols = 0;
		while (cols <= 9)
		{
			prod = rows * cols;
			tens = prod / 10;
			ones = prod % 10;
			if (cols == 0)
			{
				_putchar('0');
			}
			else if (prod < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
			cols++;
		}
		_putchar('\n');
		rows++;
	}
