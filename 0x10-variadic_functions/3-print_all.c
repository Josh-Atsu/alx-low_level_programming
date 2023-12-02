#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - print anything
 * @format: types in order
 */
void print_all(const char * const format, ...)
{
	va_list all_arg;
	int i, count;

	va_start(all_arg, format);
	i = 0;
	while (format[i] != '\0' && format != NULL)
	{
		count = 0;
		switch (format[i])
		{
			case 'c':
			{
				printf("%c", va_arg(all_arg, int));
				count = 1;
				break;
			}
			case 'i':
			{
				printf("%d", va_arg(all_arg, int));
				count = 1;
				break;
			}
			case 'f':
			{
				printf("%f", va_arg(all_arg, double));
				count = 1;
				break;
			}
			case 's':
			{
				printf("%s", va_arg(all_arg, char *));
				count = 1;
				break;
			}
		}
		if (format[i + 1] != '\0' && count == 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(all_arg);
}
