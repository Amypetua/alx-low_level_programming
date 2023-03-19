#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: head of linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *present_node;

	while ((present_node = head) != NULL)
	{
		head = head->next;
		free(present_node->str);
		free(present_node);
	}
}
