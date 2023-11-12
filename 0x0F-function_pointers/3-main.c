#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code and arguments
 * and indirectlt calls for the operator function
 * @ac: argument count
 * @av: argument vector
 * Return: the correct answer after operation
 */
int main(int ac, char *av[])
{
	int num1, num2;
	int (*oprt)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	oprt = (get_op_func(av[2]));
	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", oprt(num1, num2));
	return (0);
}
