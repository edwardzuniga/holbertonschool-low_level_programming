#include "function_pointers.h"

/**
 * main - funcion principal
 *
 * @argc: counter
 * @argv: vector
 * Return: Value 0
 */

int main(int argc, char *argv[])
{
int a;
int b;
int operation;
int (*ptr)(int, int);

if (argc != 4)
printf("Error\n"), exit(98);
if (argv[2][1] != '\0')
printf("Error\n"), exit(99);

ptr = get_op_func(argv[2]);
if (ptr != NULL)
{
a = atoi(argv[1]);
b = atoi(argv[3]);
operation = (*ptr)(a, b);
printf("%d\n", operation);
}
else
printf("Error\n"), exit(99);
return (0);
}
