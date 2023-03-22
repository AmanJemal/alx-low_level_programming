#include "main.h"

/**
 * times_table - print multiplication table
 */

void times_table(void)
{
	int row;
	int col;
	int pr;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			pr = (row * col);

			if (col == 0)
			{
				_putchar('0' + pr);
			}
			else if (pr <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + pr);
			}
			else if (pr > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (pr / 10));
				_putchar('9' + (pr % 10));
			}
		}
		_putchar('\n');
	}
}
