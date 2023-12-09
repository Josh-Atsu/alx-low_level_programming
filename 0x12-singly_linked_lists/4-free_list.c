#include "lists.h"
/**
 * free_list - frees any list_t that has been called to malloc
 * @head: the malloc'ed list_t
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr_tmp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		ptr_tmp = head->next;
		free(head->str);
		free(head);
		head = ptr_tmp;
	}
	free(head->str);
	free(head);
}
