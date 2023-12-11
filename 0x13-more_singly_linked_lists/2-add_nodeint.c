#include "lists.h"
/**
 * add_nodeint - ad a node at the beginning of the listint
 * @head: head pointer to the first node
 * @n: data to put
 * Return: address of the first node
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodeptr;

	nodeptr = malloc(sizeof(listint_t));
	if (nodeptr == NULL)
		return (NULL);
	nodeptr->n = n;
	nodeptr->next = *head;
	*head = nodeptr;
	return (*head);
}
