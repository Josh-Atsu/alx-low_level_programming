#include "lists.h"
/**
 * reverse_listint - reverse the listint
 * @head: double pointer tothe first node
 * Return: the listint in reverse form
 */
listint_t *reverse_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (NULL);
	return (*head);
}
