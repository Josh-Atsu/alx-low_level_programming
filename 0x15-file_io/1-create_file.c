#include "main.h"

/**
 * create_file - a function that creates a file with the permission rw-------.
 * @filename: the name of the file to create
 * @text_content: the string to add
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int n_let;
	int wrt;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (n_let = 0; text_content[n_let]; n_let++)
		;
	wrt = write(fd, text_content, n_let);
	if (wrt == -1)
		return (-1);
	close(fd);
	return (1);
}
