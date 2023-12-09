#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: the list to print
 * Return: unsigned integer
 */
size_t print_list(const list_t *h)
{
	int i = 1;
	char *temp;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		temp = h->str;
		if (temp == NULL)
		{
			temp = "[0] (nil)";
			printf("%s\n", temp);
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (i);
}
