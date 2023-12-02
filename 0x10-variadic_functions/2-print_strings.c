#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print all strings passed
 * @separator: separates the strings
 * @n: the number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list all_str;

	va_start(all_str, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(all_str, char *));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(all_str);
}
