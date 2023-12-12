#include "lists.h"
/**
 * free_listint2 - frees listints
 * second method
 * @head: the doublr pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *node_ptr;

	if (head == NULL)
		return;
	node_ptr = *head;
	while (node_ptr->next != NULL)
	{
		free(*head);
		node_ptr = node_ptr->next;
		*head = node_ptr;
	}
	free(*head);
	*head = NULL;
}
