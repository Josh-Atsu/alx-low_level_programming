#include "lists.h"
/**
 * add_nodeint_end - add node to the end
 * @head: head pointer to the first node
 * @n: the integer data to add
 * Return: the first node address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_ptr;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	node_ptr = malloc(sizeof(listint_t));
	if (node_ptr == NULL)
		return (NULL);
	node_ptr->n = n;
	node_ptr->next = NULL;
	if (*head == NULL)
	{
		*head = node_ptr;
		return (*head);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = node_ptr;
	return (*head);
}
