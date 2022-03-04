#include "main.h"
#include <stdio.h>

/**
* main -  prints the number of arguments
* @argc: tamaño de argv
* @argv: program
* Return: value 0
*/

int main(int argc, char *argv[])
{
int a;

for (a = 0; a < argc; a++)
{
printf("%s\n", argv[a]);
}
return (0);
}
