#include "main.h"

/**
 * _strlength - Counts the elements of strings
 * @a: the string
 * Return: integer of the string length
 */

int _strlength(char *a)
{
	if (*a == '\0')
	{
		return (0);
	}
	return (1 + _strlength(a + 1));
}

/**
 * _strcompare - Compare each element in the string
 * @b: the string
 * @first: the first element
 * @last: the last element
 *
 * Return: 1 if true 0 if false
 */

int _strcompare(char *b, int first, int last)
{
	if (*b == '\0')
	{
		return (1);
	}
	else if (b[first] == b[last])
	{
		if (first == last || first == last + 1)
		{
			return (1);
		}
		return (_strcompare(b, first + 1, last - 1));
	}
	return (0);
}

/**
 * is_palindrome - works with the previous functions
 * @s: the string
 *
 * Return: 1 or 0.
 */

int is_palindrome(char *s)
{
	return (_strcompare(s, 0, _strlength(s) - 1));
}
