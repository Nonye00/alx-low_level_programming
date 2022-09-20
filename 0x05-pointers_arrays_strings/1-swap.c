#include "main.h"

/**
  * swap_int - swaps the values of a and b
  * @a: parameter 1
  * @b: parameter 2
  * Return; 0
*/

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
