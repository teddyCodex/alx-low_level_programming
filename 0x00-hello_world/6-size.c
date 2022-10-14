#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int ld;
	long long int lld;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(ld));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lld));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
