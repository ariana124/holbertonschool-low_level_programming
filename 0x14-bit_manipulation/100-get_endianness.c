#include "holberton.h"

/**
 * get_endianness - function to check if machine architecture is little endian
 * or big endian
 * Return: 1 if little endian or 0 if big endian
 */
int get_endianness(void)
{
	unsigned int x = 1;

	char *c = (char *) &x; /** uses a char pointer to the bytes of an int &
				** checks first byte to see if it's 0 or 1 **/
	if (c[0] == 1)
		return (1);
	else
		return (0);
}
