#include "main.h"

/**
 * binary_to_uint - binary number is converted to unsigned int
 * @b: contain the binary number
 *
 * Return: the converted number, or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[a] - '0');
	}

	return (dec_val);
}
