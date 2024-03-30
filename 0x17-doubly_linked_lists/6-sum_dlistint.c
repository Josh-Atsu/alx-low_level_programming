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

	ptr = head;
	if (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
