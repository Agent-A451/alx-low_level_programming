#include "main.h"

/**
 *cap_string - capitalization string
 *@n: string param
 *Return: capitalized version of string
 */

char *cap_string(char *n)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'}
	int len = 13;
	int a = 0, i;

	while (n[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] = s[a] - 32;
			i++;
		}
		a++;
	}
	return (n);
}
