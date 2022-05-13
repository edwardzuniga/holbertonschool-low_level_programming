#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the beginning of a list.
 * @head: doubly linked list
 * @n: insert in the list
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_n = (dlistint_t *)malloc(sizeof(dlistint_t));
dlistint_t *end_n = *head;

if (new_n == NULL)
{
return (NULL);
}

new_n->n = n;

if (*head == NULL)
{
new_n->next = NULL;
new_n->prev = NULL;
*head = new_n;
}
else
{
while (end_n->next)
{
end_n = end_n->next;
}
end_n->next = new_n;
new_n->prev = end_n;
}
return (new_n);
}
