#include "lists.h"

/**
 * list_len - returns the number of elements of list_t h
 * @h: the struct list_s
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
