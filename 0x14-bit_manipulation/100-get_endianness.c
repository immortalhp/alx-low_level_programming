#include "main.h"

/**
 * get_endianness - To  check if the machine is little or big endian.
 *
 * Return: 1 for little, 0 for Big.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
