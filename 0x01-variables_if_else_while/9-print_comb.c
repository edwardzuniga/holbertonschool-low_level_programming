#include <stdio.h>

/**
* main - init
* Return: value 0
*/

int main(void)
{
int undigit;
for (undigit = '0'; undigit <= '9'; undigit++)
{
putchar (undigit);
if (undigit < '9')
{
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
