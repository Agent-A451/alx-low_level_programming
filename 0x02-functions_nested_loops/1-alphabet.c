#include "main.h"
#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
