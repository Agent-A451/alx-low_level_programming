#include "main.h"
#include <string.h>

/**
 * _strncpy - function which copies a string
 * @dest: first param
 * @src: second param
 * @n: third param
 * Return: a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
