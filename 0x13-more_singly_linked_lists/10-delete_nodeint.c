#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node a an index
 * @head: pointer to the first node
 * @index: the position to remove node
 *
 * Return: 1 if success or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_ptr, *ptr_node;
	unsigned int count_n = 0, i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	node_ptr = *head;
	while (node_ptr->next != NULL)
	{
		count_n++;
		node_ptr = node_ptr->next;
	}
	if (index > count_n)
		return (-1);
	node_ptr = *head;
	if (index == 0)
	{
		*head = node_ptr->next;
		free(node_ptr);
		node_ptr = NULL;
	}
	else
	{
		while (i < index - 1 && node_ptr->next != NULL)
		{
			i++;
			node_ptr = node_ptr->next;
		}
		ptr_node = node_ptr;
		node_ptr = node_ptr->next;
		ptr_node->next = node_ptr->next;
		free(node_ptr);
		node_ptr = NULL;
	}
	return (1);
}
