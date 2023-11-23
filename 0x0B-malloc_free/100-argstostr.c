#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all commandline arguments
 * and display output
 * @ac: argument count
 * @av:argument vector
 * Return: string of all the arguments passed
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, argslen;
	char *m;

	if (ac == 0 || av == NULL)
		return (NULL);
	argslen = argstocount(ac, av);
	m = malloc((ac + argslen) * sizeof(char));
	if (m == NULL)
	{
		free(m);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			m[k] = av[i][j];
			j++;
			k++;
		}
		m[k] = '\n';
		k++;
	}
	return (m);
}
/**
 * argstocount - count all arguments
 * @ac: argument count
 * @av: argument vector
 * Return: number of arguments
 */
int argstocount(int ac, char **av)
{
	int i, j, count = 0;

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			count += 1;
			j++;
		}
	}
	++count;
	return (count);
}
