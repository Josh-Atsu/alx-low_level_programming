#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print elements of a double linked list
 * @h: pointer to the first node in the list
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
			count += 1;
	}
	printf("%d\n", h->n);
	h = h->next;
	return (count + 1);
}
