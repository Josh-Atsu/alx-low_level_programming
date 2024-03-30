#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at particular index
 * @h: pointer to the double linked list
 * @idx: position to insert node
 * @n: data
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *ptr;
	unsigned int count = 0;

	if (*h == NULL || h == NULL)
		return (NULL);
	ptr = (*h);
	while (ptr->next)
	{
		count += 1;
		ptr = ptr->next;
	}
	if (idx > count)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	ptr = (*h);
	while (idx > 1)
	{
		ptr = ptr->next;
		idx--;
	}
	new_node->next = ptr->next;
	ptr->next->prev = new_node;
	ptr->next = new_node;
	new_node->prev = ptr;
	return (*h);
}
