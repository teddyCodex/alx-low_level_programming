#include "main.h"

/**
 * jack_bauer - Entry point
 * programm/function that prints every minute of the day
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int hours_tens, hours_ones, mins_tens, mins_ones, max_hours;

	max_hours = 58;
	hours_tens = '0';
	while (hours_tens < '3')
	{
		if (hours_tens == '2')
		{
			max_hours = '4';
		}
		hours_ones = '0';
		while (hours_ones < max_hours)
		{
			mins_tens = '0';
			while (mins_tens < '6')
			{
				mins_ones = '0';
				while (mins_ones < 58)
				{
					_putchar(hours_tens);
					_putchar(hours_ones);
					_putchar(':');
					_putchar(mins_tens);
					_putchar(mins_ones);
					_putchar('\n');
					mins_ones++;
				}
				mins_ones = '0';
				mins_tens++;
			}
			mins_tens = '0';
			hours_ones++;
		}
		hours_ones = '0';
		hours_tens++;
	}
}
