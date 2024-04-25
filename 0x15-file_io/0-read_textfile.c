#include "main.h"

/**
 * read_textfile - opens a file, reads and print
 * to standard output
 * @filename: pointer to the file
 * @letters: number of letters to print
 * Return: the numberof letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp_read;
	ssize_t count;
	char *buffer;

	if (filename == NULL)
		return (0);

	fp_read = open(filename, O_RDONLY);
	if (fp_read == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	count = read(fp_read, buffer, letters);

	write(STDOUT_FILENO, buffer, count);

	close(fp_read);
	free(buffer);

	return (count);
}
