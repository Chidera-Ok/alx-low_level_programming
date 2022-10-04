#include "main.h"

int _strlen_recursion(char *s);
int palindrome_checker(char *s, int i, int j);

/**
 * is_palindrome -  a function that returns 1 if
 * a string is a palindrome and 0 if not.
 * @s: string
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int k;

	k = _strlen_recursion(s);

	if (*s == '\0')
		return (1);
	else if (palindrome_checker(s, 0, k - 1) == 1)
		return (1);
	else
		return (0);
}

/**
 * _strlen_recursion - calculate the length of a string
 * @s: string
 *
 * Return: the length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}

/**
 * palindrome_checker - checks if string is a palindrome
 * @s: string
 * @i: left index
 * @j: right index
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int palindrome_checker(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] == s[j])
	{
		return (palindrome_checker(s, i + 1, j - 1));
	}
	return (0);
}
