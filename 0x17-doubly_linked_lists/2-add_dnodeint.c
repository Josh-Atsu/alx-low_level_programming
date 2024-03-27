#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add node at biginning of the list
 * @head: double pointer to the list
 * @n: the data to add
 * Return: the new list or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node_ptr;

	if (head == NULL)
		return (NULL);
	node_ptr = malloc(sizeof(dlistint_t));
	if (node_ptr == NULL)
		return (NULL);
	node_ptr->n = n;
	node_ptr->prev = NULL;
	node_ptr->next = *head;
	if (*head != NULL)
		(*head)->prev = node_ptr;
	*head = node_ptr;
	return (*head);
}
