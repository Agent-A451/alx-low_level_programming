#include "main.h"

/**
 *_strlen - returns the length of a string
 *@s: char to check
 * Return: 0
 */

int _strlen(char *s)
{
	int b = 0; /* starts the counter from 0 */

	for (; *s++;)
		b++;
	return (b);
}
