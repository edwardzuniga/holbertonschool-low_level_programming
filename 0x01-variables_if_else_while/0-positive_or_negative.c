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
	    ptintf("%s%d\n", n, " is positive");
	  }
	else if (n == 0)
	  {
	    printf("%s%d\n", n, " is zero");
	  }
	else
	  {
	    printf("%s%d\n", n, " is negative");
	  }

	return (0);
}
