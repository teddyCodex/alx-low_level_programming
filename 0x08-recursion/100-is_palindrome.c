#include "main.h"
/**
 * _strlen_recursion - prints length of a string
 * @s: string to evaluate
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * checker - check if s is a palindrome
 * @s: string address
 * @i: left index
 * @j: right index
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (checker(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - check if s is a palindrome
 * @s: string to evaluate
 * Return: int
 */
int is_palindrome(char *s)
{
	return (checker(s, 0, _strlen_recursion(s) - 1));
}
