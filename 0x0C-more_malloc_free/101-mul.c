#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * _is_digit - chect if number or alphabet
 * @arg: the argument passed
 * Return: the appropraite value
 */
int _is_digit(char *arg)
{
	int i, num;

	for (i = 0; arg[i]; i++)
	{
		if (!(isdigit(arg[i])))
			return (0);
	}
	num = atoi(arg);
	return (num);
}
/**
 * main - this program multiplies two numbers
 * @ac: argument count
 * @av: argument vector
 * Return: the results of the multiplication
 */
int main(int ac, char *av[])
{
	int num1, num2, mul;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = _is_digit(av[1]);
	num2 = _is_digit(av[2]);
	if (num1 == 0 || num2 == 0)
	{
		printf("Error\n");
		exit(98);
	}
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
