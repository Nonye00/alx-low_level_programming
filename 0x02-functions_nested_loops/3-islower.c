#include "main.h"

/**
 * test_islower - Test the _islower function
 *
 * @q: Number to pass to _islower function
 */
void test_islower(int q)
{
		int r;

			r = _islower(q);
			_putchar(r + '0');
			_putchar('\n');
}
