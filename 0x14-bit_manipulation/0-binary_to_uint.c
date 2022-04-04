#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointer
 *
 * Return: the converted number, or 0
 *
 */

unsigned int binary_to_uint(const char *b)
{
int i, lon, new = 0;

if (b != NULL)
{
for (lon = 0; b[lon] != '\0'; lon++)
{
if (b[lon] != 48 && b[lon] != 49)
{
return (0);
}
}
for (i = 0, lon--; lon >= 0; lon--)
{
new += ((b[lon] - '0') << i);
i++;
}
}
else
{
return (0);
}
return (new);
}
