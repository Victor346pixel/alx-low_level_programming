#include "main.h"

/**
 * get_bit - value of bit is returned as an index in a decimal number
 * @n: number to be search
 * @index: contain index of bit
 *
 * Return: value of the bit or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
