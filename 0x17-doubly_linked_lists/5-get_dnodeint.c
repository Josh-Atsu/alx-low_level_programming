#include "lists.h"

/**
 * get_dnodeint_at_index - get node at a particular index
 * @head: pointer to the dlist
 * @index: the index starting at 0
 * Return: the data at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	int n;

	if (head == NULL)
		return (NULL);
	ptr = head;
	n= index;
	while (ptr->next != NULL && n > 0)
	{
		ptr = ptr->next;
		n--;
	}
	return (ptr);
}
