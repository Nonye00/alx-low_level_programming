#include "main.h"
#include <stdio.h>

/**
  *  *main - prints the first 98 fibonaci sequences
  *  Return: 0
*/

int main(void)
{
	unsigned long f1 = 1, f2 = 2, tmp, mx = 100000000, f1o = 0, f2o = 0, tmpo = 0;
	short int i = 1, initials;

	while (i <= 98)
	{
		if (f1o > 0)
		printf("%lu", f1o);
		initials = numLength(mx) - 1 - numLength(f1);
		while (f1o > 0 && initials > 0)
		{
			printf("%i", 0);
			initials--;
		}
		printf("%lu", f1);
		tmp = (f1 + f2) % mx;
		tmpo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = tmp;
		f2o = tmpo;
		if(i != 98)
		printf(", ");
		else
		printf("\n");
		i++;
	}
	return (0);
}
