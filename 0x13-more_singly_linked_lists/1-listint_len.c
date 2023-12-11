#include "lists.h"
/**
 * listint_len - check for the number of nodes
 * @h: the pointer to the head node
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int i = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
