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
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	ptr = head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		count += 1;
	}
	if (index > count)
	{
		return (NULL);
	}
	ptr = head;
	while (ptr->next != NULL && index > 0)
	{
		ptr = ptr->next;
		index--;
	}
	return (ptr);
}
