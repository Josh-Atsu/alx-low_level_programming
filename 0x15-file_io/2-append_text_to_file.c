#include "main.h"

/**
 * append_text_to_file - appends a text t0 a file
 * @filename: the name of the file
 * @text_content: the text content
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nchar;
	int wrt;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (nchar = 0; text_content[nchar];)
		nchar++;
	wrt = write(fd, text_content, nchar);
	if (wrt == -1)
		return (-1);

	return (1);
}
