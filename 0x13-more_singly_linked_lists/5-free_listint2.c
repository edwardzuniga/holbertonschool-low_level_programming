#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * @head: pointer
 *
 * Return: Value 0
 *
 */

void free_listint2(listint_t **head)
{
listint_t *liberar;

if (head == NULL)
{
return;
}
while (*head != NULL)
{
liberar = *head;
*head = liberar->next;
free(liberar);
}
}
