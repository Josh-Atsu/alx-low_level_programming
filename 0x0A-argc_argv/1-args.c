#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - print the number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char  *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
