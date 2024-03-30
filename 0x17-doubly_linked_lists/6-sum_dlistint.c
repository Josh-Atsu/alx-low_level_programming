#include "lists.h"

/**
 * sum_dlistint - sum all data in the dlist
 * @head: pointer to the dlist
 * Return: the Addition
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
