#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *curr_n;

	if (head != NULL)
	{
		curr_n = *head;
		while ((temp = curr_n) != NULL)
		{
			curr_n = curr_n->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *head_ptr, *new, *add;
	listint_t *curr_n;

	head_ptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = head_ptr;
		head_ptr = new;

		add = head_ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&head_ptr);
				return (nnodes);
			}
		}

		curr_n = *h;
		*h = (*h)->next;
		free(curr_n);
		nnodes++;
	}

	*h = NULL;
	free_listp2(&head_ptr);
	return (nnodes);
}
