#include "main.h"
#include <string.h>
/**
 * rev_string - a function that male a string in reverse
 * @s: Declared as pointer of type char.
 */
void rev_string(char *s)
{
	int i, len;

	if (s == NULL)
	{
		return;
	}

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{

		char tmp = s[i];

		s[i] = s[len - i - 1];

		s[len - i - 1] = tmp;
	}

}
