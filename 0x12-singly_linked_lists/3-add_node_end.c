#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: pointer
 * @str: needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *finish = *head;
int a = 0;

new_node = malloc(sizeof(list_t));

if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
while (finish->next != NULL)
{
finish = finish->next;
}
finish->next = new_node;
}

while (str[a])
{
a++;
}
new_node->len = a;

return (new_node);
}
