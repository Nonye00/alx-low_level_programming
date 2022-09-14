#include "main.h"
/**
 * *_islower - controls if a character is in lowercase
 * *@q: character to pass the islower function
 * *Return: return 0 or 1
 * */
void _islower(int q)
{
	if (q >= 'a' && q <= 'z')
		return (1);

	return (0);
}

