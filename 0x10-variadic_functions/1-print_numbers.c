#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints all numbers passed to the arguments
 * except the seperatoe and the n
 * @separator: the inbetween numbers to separate them
 * @n: the number of arguments passed
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list allnum; /* all numbers after n */

	if (separator == NULL || n == 0)
		return;
	va_start(allnum, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(allnum, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(allnum);
}
