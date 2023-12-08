#include "lists.h"
#include <string.h>
/**
 * add_node - adds new node to the end of the previous node
 * @head: double pointer to the data structure linking
 * @str: the string to add as data
 * Return: the data structure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *mall;
	char *_str;

	_str = strdup(str);
	mall = malloc(sizeof(list_t));
	if (mall == NULL)
	{
		free(mall);
		return (NULL);
	}
	mall->str = _str;
	mall->len = strlen(str);
	mall->next = *head;
	*head = mall;
	return (*head);
}
