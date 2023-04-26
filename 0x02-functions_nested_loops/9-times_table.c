#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int p, o, m;

	for (p = 0; p < 10; p++)
	{
		for (o = 0; o < 10; o++)
		{
			m = o * p;
			if (o == 0)
			{
				_putchar(m + '0');
			}

			if (m < 10 && o != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			} else if (m >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

