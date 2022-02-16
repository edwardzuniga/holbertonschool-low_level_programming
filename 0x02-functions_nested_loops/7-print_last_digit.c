#include "main.h"

/**
* print_last_digit - imprime el ultimo digito
* @ud: init
* Return: value 0 or 1
*/

int print_last_digit(int ud)
{
if (ud > 0)
{
ud = ud % 10;
_putchar(ud + '0');
}
else
{
ud = ud % 10 * -1;
_putchar(ud + '0');
}
return (ud);
}
