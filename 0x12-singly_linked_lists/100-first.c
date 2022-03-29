#include "lists.h"

/**
 * print_before - prints before the main function is executed.
 *
 * Return: Value 0
 */
void print_before(void)__attribute__ ((constructor));

void print_before(void)
{
char *a;

a = ("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");

printf("%s", a);

}
