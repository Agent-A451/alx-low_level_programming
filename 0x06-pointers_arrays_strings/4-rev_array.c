#include "main.h"
#include <string.h>

/**
 *reverse_array - reverses array
 *@a: array a
 *@n: an element of an array
 *Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
