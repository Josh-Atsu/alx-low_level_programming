#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds node to the end of data structure
 * @head: the beginning of the structure
 * @str: the string to add as data
 * Return: the address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *temp;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;
	ptr = *head;
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (*head);
}
