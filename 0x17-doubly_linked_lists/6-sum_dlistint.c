#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a list.
 * @head: head of the list
 *
 * Return: value 0
 */

int sum_dlistint(dlistint_t *head)
{
int addi = 0;

while (head != NULL)
{
addi += head->n;
head = head->next;
}
return (addi);
}
