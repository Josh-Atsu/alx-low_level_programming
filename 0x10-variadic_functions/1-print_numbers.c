#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print all numbers
 * @separator, separates each numner
 * @n: number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list all_num;

	if (n == 0)
		return;
	va_start(all_num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(all_num, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(all_num);
}
