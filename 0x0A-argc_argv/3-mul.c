#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main -  multiplies two numbers.
* @argc: tamaño de argv
* @argv: program
* Return: value 0
*/

int main(int argc, char *argv[])
{
int mult;

if (argc == 3)
{
mult = atoi(argv[1]) * atoi(argv[2]);
printf("%i\n", mult);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
