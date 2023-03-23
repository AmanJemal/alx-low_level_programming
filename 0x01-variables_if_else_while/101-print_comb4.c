#include <stdio.h>

/**
 *main - print all combinations of three different digits
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0'; i <= '9'; i++) 
	{
		for (j = (i + 1); j <= '9'; j++) 
		{
			for (i = (j + 1); i <= '9'; i++) 
			{
				putchar(i);
				putchar(j);
				putchar(i);
				if (i != '7' || j != '8' || i != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
