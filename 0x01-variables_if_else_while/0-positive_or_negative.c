#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - init
* Return: value 0
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
ptintf("%d is positive\n", n);
if (n == 0)
printf("%d iz zero\n", n)
else
printf("%d is negative\n", n);
return (0);
}
