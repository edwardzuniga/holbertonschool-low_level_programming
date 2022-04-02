#include "lists.h"

/**
 * pop_listint -  returns the nth node of a listint_t linked list.
 * @head: pointer
 *
 * Return: if the node does not exist, return NULL
 *
 */

int pop_listint(listint_t **head)
{
listint_t *liberar;
int info_node;

if (*head == NULL)
{
return (0);
}

info_node = (*head)->n;
liberar = (*head)->next;
free(*head);
*head = liberar;

return (info_node);
}
