#include "main.h"

/**
* contrario - returns the value of x raised to the power of y
* @x: numero
* @y: incrementa
* Return: value 0
*/

int contrario(int x, int y)
{
if (x * x == y)
{
return (x);
}
else if (x * x > y)
{
return (-1);
}
return (contrario(x + 1, y));
}
/**
* _pow_recursion - returns the natural square root of a number
* @n: int
* Return: value 0
*/

int _sqrt_recursion(int n)
{
int a = 1;
return (contrario(a, n));
}
