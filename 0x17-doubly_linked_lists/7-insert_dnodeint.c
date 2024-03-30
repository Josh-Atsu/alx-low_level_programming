#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at particular index
 * @h: pointer to the double linked list
 * @idx: position to insert node
 * @n: data
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *ptr;
	unsigned int count = 1;

	if (h == NULL)
		return (NULL);
	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));
	ptr = (*h);
	while (count < idx)
	{
		count += 1;
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
	}
	if (ptr->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	new_node->next = ptr->next;
	ptr->next->prev = new_node;
	ptr->next = new_node;
	new_node->prev = ptr;
	return (new_node);
}
