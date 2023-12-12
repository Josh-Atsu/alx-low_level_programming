#include "lists.h"
/**
 * free_listint - free all member of a listint
 * allocate to malloc
 * @head: the listint to free
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
