#include "main.h"

/**
 * times_table - print multiplication table
 */

void print_times_table(int n)
{
	int row;
	int col;
	int pr;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				pr = (row * col);

				if (col == 0)
				{
					_putchar('0' + pr);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (pr <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + pr);
					}
					else if (pr > 9 && pr < 100)
					{
						_putchar(' ');
						_putchar('0' + (pr / 10));
						_putchar('0' + (pr % 10));
					}
					else if (pr >= 100)
					{
						_putchar('0' + (pr / 10));
						_putchar('0' + ((pr / 10) % 10));
						_putchar('0' + (pr % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
