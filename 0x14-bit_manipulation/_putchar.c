#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the Char c to standardoutput
 * @c: The Char to print
 *
 * Return: 1. on success
 * On error, return is -1 , and appropriately set errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
