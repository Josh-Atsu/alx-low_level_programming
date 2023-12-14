#include "lists.h"
/**
 * reverse_listint - reverse the listint
 * @head: double pointer tothe first node
 * Return: the listint in reverse form
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node_ptr, *ptr_node;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	node_ptr = *head;
	*head = (*head)->next;
	node_ptr->next = NULL;
	while ((*head)->next != NULL)
	{
		ptr_node = (*head)->next;
		(*head)->next = node_ptr;
		node_ptr = *head;
		*head = ptr_node;
	}
	(*head)->next = node_ptr;
	return (*head);
}
