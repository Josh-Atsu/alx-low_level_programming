#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node at perticular index of listint
 * @head: double pointer to the first node
 * @idx: index to position the new node
 * @n: the data to put along
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node_ptr, *temp, *ptr_node;
	unsigned int i = 0, c_node = 0;

	if (*head == NULL || head == NULL)
		return (NULL);
	node_ptr = *head;
	while (node_ptr->next != NULL)
	{
		c_node++;
		node_ptr = node_ptr->next;
	}
	node_ptr = *head; /* reassign head to node_ptr */
	if (idx > c_node + 1)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (idx == 0)
	{
		ptr_node = node_ptr;
		node_ptr = temp;
		temp->next = ptr_node;
		*head = temp;
	}
	else
	{
		while (i < idx - 1 && node_ptr->next != NULL)
		{
			i++;
			node_ptr = node_ptr->next;
		}
		ptr_node = node_ptr;
		node_ptr = node_ptr->next;
		ptr_node->next = temp;
		temp->next = node_ptr;
	}
	return (temp);
}
