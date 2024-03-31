#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - print anything
 * @format: types in order
 */
void print_all(const char * const format, ...)
{
	va_list all_arg;
	int i = 0, count = 0;

	va_start(all_arg, format);
	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i])
		{
			case 'c':
			{
				printf("%c", va_arg(all_arg, int));
				break;
			}
			case 'i':
			{
				printf("%d", va_arg(all_arg, int));
				break;
			}
			case 'f':
			{
				printf("%f", va_arg(all_arg, double));
				break;
			}
			case 's':
			{
				print_string(va_arg(all_arg, char *));
				break;
			}
			default:
				count = 1;
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
void print_string(char *str)
{
	if (str == NULL)
		printf("(nil)");
	printf("%s", str);
}
