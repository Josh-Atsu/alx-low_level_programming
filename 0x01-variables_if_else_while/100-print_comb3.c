#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = 0; x <= 99; x++)
	{
		putchar(x + '0');
		for (x < 10)
		{
			putchar(
