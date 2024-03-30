#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node a index
 * @head: pointer to pointer of the duoble linked list
 * @index: index starting from 0
 * Return: 1 or -1 if failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr, *node;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	ptr = (*head);
	if (index == 0)
	{
		(*head) = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}
	while (count < index - 1)
	{
		count += 1;
		ptr = ptr->next;
		if (ptr == NULL)
			return (-1);
	}
	if (ptr->next == NULL)
	{
		free(ptr);
		return (1);
	}
	node = ptr->next;
	ptr->next = ptr->next->next;
	if (ptr->next != NULL)
		node->next->prev = ptr;
	free(node);
	return (1);
}
