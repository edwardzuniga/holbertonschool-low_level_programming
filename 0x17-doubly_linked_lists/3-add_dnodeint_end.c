#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the beginning of a list.
 * @head: doubly linked list
 * @n: insert in the list
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_n;
dlistint_t *end_n = *head;

new_n = malloc(sizeof(dlistint_t));

if (new_n == NULL)
{
return (NULL);
}

new_n->n = n;
new_n->next = NULL;

if (end_n == NULL)
{
while (end_n->next != NULL)
{
end_n = end_n->next;
}
end_n->next = new_n;
}
else
{
*head = new_n;
}
new_n->prev = end_n;
return (new_n);
}
