#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: input
 *
 * Return: return the length of string
*/

int _strlen_recursion(char *s)
{
	int longi  = 0;

	if (*s)
	{
		longi++;
		longi += _strlen_recursion(s + 1);
	}

	return (longi);
}
