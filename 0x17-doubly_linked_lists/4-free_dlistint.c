#include "lists.h"

/**
 * free_dlistint - free all malloc'd spaces in list
 * @head: pointer to the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	temp = NULL;
	free(head);
}
