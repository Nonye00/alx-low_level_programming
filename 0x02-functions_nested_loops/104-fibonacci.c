#include "main.h"
#include <stdio.h>

/**
  *  *main - prints the first 98 fibonaci sequences
  *  Return: 0
*/

int main(void)
{
	unsigned long f1 = 1, f2 = 2, tmp, mx = 100000000, f1o = 0, f2o = 0, tmpo = 0;
	short int i = 1, initial0s;

	while (i <= 98)
	{
		if (f1o > 0)
		printf("%lu", f1o);
		initial0s = numLength(mx) - 1 - numLength(f1);
		while (f1o > 0 && initial0s > 0)
		{
			printf("%i", 0);
			initial0s--;
		}
		printf("%lu", f1);
		mp = (f1 + f2) % mx;
		mpo = f1o + f2o + (f1 + f2) / mx;
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
