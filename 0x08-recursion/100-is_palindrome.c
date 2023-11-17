#include "main.h"
/**
 * is_palindrome - check if the string is a palindrome
 * @s: the string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (my_palindrome(s, 1, 0));
}

/**
 * _strlen - count the total length of the string
 * @s: the string
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(++s));
}

/**
 * my_palindrome - compares the string starting and ending simultaneously
 * @s: the string
 * @x: decreament position
 * @j: increament position of character in string
 * Return: 1 or 0
 */
int my_palindrome(char *s, int x, int j)
{
	int i;

	i = (_strlen(s) - x);
	if (s[j] != s[i])
		return (0);
	else if (s[j] == s[i] && (j == i || j == i - 1))
		return (1);
	return (my_palindrome(s, ++x, ++j));
}
