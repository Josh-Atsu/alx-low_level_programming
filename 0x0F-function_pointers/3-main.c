#include "3-calc.h"
/**
 * main - the start of the code
 * @ac: argument count
 * @av: argument vector
 * Return: always 0.
 */
int main(int ac, char *av[])
{
	int arg1, arg2;
	int (*result)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(av[1]);
	arg2 = atoi(av[3]);
	result = get_op_func(av[2]);
	if (!(result))
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", result(arg1, arg2));
	return (0);
}
