#include "main.h"

/**
 * copy_file - copies file content from one to another
 * @file_from: original file to copy from
 * @file_to: the filr to copy to
 * Return: 1 or -1
 */

void copy_file(const char *file_from, const char *file_to)
{
	int fd_from;
	char *buffer;
	int nchar;

	if (file_from == NULL)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	buffer = malloc(sizeof(char) * (1024 * 2));
	if (buffer == NULL)
		exit(98);
	nchar = read(fd_from, buffer, 2048);
	close(fd_from);
	copy_file_to(file_to, buffer, nchar);
	free(buffer);
}

/**
 * copy_file_to - receives files from and copies to file_to
 * @file_to: the file to copy to
 * @buffer: the text content
 * @nchar: number of characters to copy
 */
void copy_file_to(const char *file_to, char *buffer, int nchar)
{
	int fd_to;
	int wrt, cls;

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	wrt = write(fd_to, buffer, nchar);
	if (wrt == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	cls = close(fd_to);
	if (cls == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * main - where the main codes goes
 * to receive the file_from and sends it to file_to
 * @argc: argumnent count
 * @argv: argument vector
 * Return: 1
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
			exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (1);
}
