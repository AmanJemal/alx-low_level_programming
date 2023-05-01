#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_n;
	size_t n_char;

	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);

	new_n->str = strdup(str);

	for (n_char = 0; str[n_char]; n_char++)
		;

	new_n->len = n_char;
	new_n->next = *head;
	*head = new_n;

	return (*head);
}
