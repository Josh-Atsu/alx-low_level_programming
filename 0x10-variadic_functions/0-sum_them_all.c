#include "variadic_functions.h"

/**
 * sum_tthem_all - return the sum of all optional arguments passed
 * @n: the number of arguments passed
 * Return: the summed value
 */
int sum_them_all(const int n, ...)
{
	int i, sum = 0;
	va_list sumag;

	if (n == 0)
		return (0);
	va_start(sumag, n);
	for (i = 0; i < n; i++)
		sum += va_arg(sumag, int);
	va_end(sumag);
	return (sum);
}
