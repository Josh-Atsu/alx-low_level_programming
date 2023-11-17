#include <stdio.h>

/**
 * main - Print the name of the programe executed
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s", argv[0]);
	printf("\n");
	return (0);
}
