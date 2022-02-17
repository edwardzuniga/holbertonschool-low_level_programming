#include "main.h"

/**
* _isdigit - chequear de 0 a 9
* @c: init
* Return: value 0 or 1
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
