#include "lists.h"
/**
 * get_nodeint_at_index - get a node at a particular index
 * @head: the pointer to the first node
 * @index: the index of the node
 *
 * Return: the data at the nth node of the listint
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node_ptr, *temp;
	unsigned int i = 0, count_node = 0;

	if (head == NULL)
		return (NULL);
	node_ptr = head;
	temp = head;
	while (temp->next != NULL)
	{
		count_node++;
		temp = temp->next;
	}
	if (index > count_node)
		return (NULL);
	while (node_ptr->next != NULL && i < index)
	{
		node_ptr = node_ptr->next;
		i++;
	}
	return (node_ptr);
}
