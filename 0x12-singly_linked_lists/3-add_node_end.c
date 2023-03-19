#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of linked list.
 * str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *present_node;
	size_t nchar;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;
	new_node->len = nchar;
	new_node->next = NULL;
	present_node = *head;

	if (present_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (present_node->next != NULL)
			present_node = present_node->next;
		present_node->next = new_node;
	}

	return (*head);
}
