#include "main.h"

/**
* _isupper - chequear si es mayusculas
* @c: init
* Return: value 0 or 1
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
