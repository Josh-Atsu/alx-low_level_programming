#include "lists.h"
/**
 * print_listint - print all element of listint
 * @h: the pointer to the first node
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	printf("%d\n", h->n);
	return (i);
}
