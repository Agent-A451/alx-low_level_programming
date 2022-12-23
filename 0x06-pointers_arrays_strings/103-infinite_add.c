#include "main.h"

/**
 * infinite_add - Adds the numbers stored in two strings.
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer to store the result.
 * @size_r: The current size of the buffer.
 * Return: If r can store the sum - a pointer to the result.
 * If r cannot store the sum - 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, size_r--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + size_r) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n1; n1--, size_r--)
	{
		num = (*n1 - '0') + tens;
		*(r + size_r) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n2; n2--, size_r--)
	{
		num = (*n2 - '0') + tens;
		*(r + size_r) = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens && size_r >= 0)
	{
		*(r + size_r) = (tens % 10) + '0';
		return (r + size_r);
	}

	else if (tens && size_r < 0)
		return (0);
	return (r + size_r + 1);
}
