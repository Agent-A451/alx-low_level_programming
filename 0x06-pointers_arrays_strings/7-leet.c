#include "main.h"

/**
 * leet - encodes a string
 * @n: param1
 * Return: integer
 */

char *leet(char *n)
{
	int a =0, b = 0, l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', '1'};

	while (n[a])
	{
		b = 0;
		while (b < l)
		{
			if (n[a] == tr[b] || n[a] - 32 == tr[b])
				n[a] = trw[b];
			b++;
		}
		a++
	}
	return (n);
}
