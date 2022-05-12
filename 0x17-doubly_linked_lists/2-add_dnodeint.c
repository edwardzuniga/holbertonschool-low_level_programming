#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list.
 * @head: doubly linked list
 * @n: insert in the list
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_n;

new_n = malloc(sizeof(dlistint_t));

if (new_n != NULL)
{
new_n->next = *head;
new_n->prev = NULL;
new_n->n = n;

if (*head != NULL)
{
(*head)->prev = new_n;
}
*head = new_n;
return (new_n);
}
return (NULL);
}
