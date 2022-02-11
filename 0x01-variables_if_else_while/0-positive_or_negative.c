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
{
ptintf("%d\n" n, " is positive");
}
if (n < 0)
}
printf("%d\n" n, " iz zero")
}
else
{
printf("%d\n" n, " is negative");
}
return (0);
}
