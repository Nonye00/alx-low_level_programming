#include "main.h"
/**
 * _islower - function to check for lowercase letters
 * @q: this is the int for the function
 * return:0
 */
int _islower(int q)
{
	if (q >= 'a' && q<= 'z')
	{
		return (1);
	}
	else
		return (0);
}
