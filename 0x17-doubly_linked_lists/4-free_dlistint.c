#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.t.
 * @head: head of the list
 *
 * Return: value 0
 */

void free_dlistint(dlistint_t *head)
{
if (head != NULL)
{
free_dlistint(head->next);
free(head);
}
}
