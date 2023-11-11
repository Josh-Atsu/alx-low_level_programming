#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Print all strings passed as arguments
 * @separator: separates each string
 * @n: number of strings passed as argument
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list all_str;
	char *str_h; /* pointer to hold the first string */

	if (separator == NULL)
		return;
	if (n == 0)
		return;
	va_start(all_str, n);
	for (i = 0; i < n; i++)
	{
		str_h = va_arg(all_str, char *);
		if (str_h != NULL)
			printf("%s", str_h);
		else
			printf("nil");
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(all_str);
}
