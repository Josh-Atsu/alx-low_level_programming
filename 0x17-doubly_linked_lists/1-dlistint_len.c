#include "lists.h"

/**
 * dlistint_len- check the length of list
 * @h: pointer to the first node
 * Return: the number of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
