#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - add all the numbers of the parameters
 * @n: the number of parameters
 * Return: the summed numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	int results = 0;
	unsigned int i;
	va_list allnum;

	if (n == 0)
		return (0);
	va_start(allnum, n);

	for (i = 0; i < n; i++)
	{
		results += va_arg(allnum, int);
	}
	va_end(allnum);
	return (results);
}
