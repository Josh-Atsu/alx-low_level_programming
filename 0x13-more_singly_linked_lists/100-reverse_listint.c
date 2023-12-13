#include "lists.h"
/**
 * reverse_listint - reverse the listint
 * @head: double pointer tothe first node
 * Return: the listint in reverse form
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node_ptr, *ptr_node, *temp;

	if (head == NULL || *head == NULL)
		return (NULL);
	node_ptr = *head;
	ptr_node = NULL;
	if (node_ptr->next == NULL)
		return (*head);
	node_ptr = node_ptr->next;
	ptr_node = *head;
	*head = node_ptr;
	ptr_node->next = NULL;
	temp = node_ptr->next;
	node_ptr->next = ptr_node;
	node_ptr = temp;

	while (node_ptr->next != NULL)
	{
		ptr_node = *head;
		*head = node_ptr;
		node_ptr = node_ptr->next;
		temp->next = ptr_node;
		temp = node_ptr;
	}
	ptr_node = *head;
	*head = node_ptr;
	node_ptr->next = ptr_node;
	ptr_node = NULL;
	node_ptr = NULL;
	temp = NULL;
	return (*head);
}
