#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - print anything
 * @format: types in order
 */
void print_all(const char * const format, ...)
{
	va_list all_arg;
	int i = 0, count;

	va_start(all_arg, format);
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
				count = print_string(va_arg(all_arg, char *));
				break;
			}
			default:
				break;
		}
		if (format[i + 1] != '\0' && count == 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(all_arg);
}

/**
 * print_string - prints only strings
 * @str: the string to print
 * Return: nothing
 */
int print_string(char *str)
{
	if (str == NULL)
		printf("(nil)");
	printf("%s", str);
	return (1);
}
