#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"
/**
 * is_digit - check if the the values are digits
 * @c: the chracter
 * Return: the value
 */
int is_digit(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] < '0' || c[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * error - print error and exit
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * _strlen - count the length of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, carry, i, digit1, digit2, *results, a = 0;

	s1 = argv[1];
	s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s1))
		error();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	results = malloc(sizeof(int) * len);
	if (!results)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		results[i] = '0';
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
		carry += results[len1 + len2 + 1] + (digit1 * digit2);
		results[len1 + len2 + 1] = carry % 10;
		carry /= 10;
	}
	if (carry > 0)
		results[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (results[i])
			a = 1;
		if (a)
			_putchar(results[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(results);
		return (0);
}