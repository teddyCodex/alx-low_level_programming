#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
	int lastDigit = n % 10;
	char str[15] = "Last Digit of";
	char greater[25] = "and is greater than 5";
	char less[30] = "and is less than 6 and not 0";
	char zero[10] = "and is 0";

	if (lastDigit == 0)
		printf("%s %d is %d %s\n", str, n, lastDigit, zero);
	else if (lastDigit > 5)
		printf("%s %d is %d %s\n", str, n, lastDigit, greater);
	else
		printf("%s %d is %d %s\n", str, n, lastDigit, less);
	return (0);
}
