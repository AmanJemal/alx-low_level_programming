#include <stdio.h>

/**
 *main - prints lowercase and uppercase alphabets
 *
 *Return: 0 is for success
 */
int main(void)
{

	char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (i < 52)
	{
		putchar(alph[i]);
		i++;
	}
	putchar('\n');
	return (0);
}


