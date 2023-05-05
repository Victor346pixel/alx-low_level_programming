#include "main.h"

/**
 * set_bit - a bit is set at a given index to 1
 * @n: pointer to number to be changed
 * @index: index of bit set to 1
 * Return: 1 if it worked, -1 if an error occured
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
