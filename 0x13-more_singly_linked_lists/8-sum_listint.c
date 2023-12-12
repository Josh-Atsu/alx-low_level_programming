#include "lists.h"
/**
 * sum_listint - sum all the data (n) of listint_t
 * @head: pointer to the first node
 *
 * Return: the sum of all data (n)
 */
int sum_listint(listint_t *head)
{
	int sum_data = 0;
	listint_t *node_ptr;

	if (head == NULL)
		return (0);
	node_ptr = head;
	while (node_ptr->next != NULL)
	{
		sum_data += node_ptr->n;
		node_ptr = node_ptr->next;
	}
	sum_data += node_ptr->n;
	return (sum_data);
}
