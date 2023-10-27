#include "main.h"

/**
 * _strcmp - Compares two values
 * @s1: Has the first value
 * @s2: Has the second value
 *
 * Return: 0, 1 or -1
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
			{
				return (s1[i] - s2[i]);
			}
			else if (s1[i] < s2[i])
			{
				return (s1[i] - s2[i]);
			}
		}
	}
	return (0);
}
