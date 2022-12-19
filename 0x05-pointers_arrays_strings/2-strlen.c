#include "main.h"

/**
 *_ strlen - tells us the lenght of a string
 * Return 0
 */

int _strlen(char *s)
{
	int b = 0; /* starts the counter from 0 */

	for (; *s++;)
		b++;
	return (b);
}
