#include "lists.h"

/**
 * free_listint - adds a new node at the beginning of a listint_t list
 * @head: pointer
 *
 * Return: Value 0
 *
 */

void free_listint(listint_t *head)
{
listint_t *liberar;

while (head != NULL)
{
liberar = head;
head = liberar->next;
free(liberar);
}
}
