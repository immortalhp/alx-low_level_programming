#include "main.h"

/**
 * clear_bit - sets the value of a particular bit to 0.
 * @n: pointer of the unsigned long int.
 * @index: index of the bit.
 *
 * Return: -1 for failure, 1 for success.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
