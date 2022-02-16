#include "main.h"

/**
* jack_bauer - minuto del dia
*
* Return: value 0
*/

void jack_bauer(void)

{
int hr;
int mn;
for (hr = 0; hr <= 23; hr++)
{
for (mn = 0; mn <= 59; mn++)
{
_putchar((hr / 10) + '0');
_putchar((hr % 10) + '0');
_putchar(':');
_putchar((mn / 10) + '0');
_putchar((mn % 10) + '0');
_putchar('\n');
}
}
}
