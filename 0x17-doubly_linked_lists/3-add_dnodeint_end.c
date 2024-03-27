#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of list
 * @head: double pointer to the list
 * n: data contained
 * Return: new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_ptr;
	dlistint_t *temp;

	node_ptr = malloc(sizeof(dlistint_t));
	if (node_ptr == NULL)
		return (NULL);
	node_ptr->n = n;
	node_ptr->next = NULL;
	temp = *head;
	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = node_ptr;
	}
	else
		(*head) = node_ptr;
	node_ptr->prev = temp;
	return (*head);
}
