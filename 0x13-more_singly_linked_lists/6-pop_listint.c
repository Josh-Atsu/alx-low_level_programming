#include "lists.h"
/**
 * pop_listint - deletes the head node of listint
 * @head: pointer to the first node
 *
 * Return: returns the head node's data(n)
 * or 0 if empty
 */
int pop_listint(listint_t **head)
{
	int num = 0;
	listint_t *ptr_node;

	if (head == NULL || *head == NULL)
		return (num);
	ptr_node = *head;
	if (ptr_node->next == NULL)
	{
		num = ptr_node->n;
		free(*head);
		*head = NULL;
		ptr_node = NULL;
		return (num);
	}
	num = ptr_node->n;
	*head = ptr_node->next;
	free(ptr_node);
	ptr_node = NULL;
	return (num);
}
