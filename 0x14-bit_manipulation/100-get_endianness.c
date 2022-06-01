#include "main.h"
/**
  * get_endianness - checks the eandianness
  *
  * Return: 0 if big endian; 1 if little endian
  */
int get_endianness(void)
{
	unsigned int test = 1;

	if (test & 1)
		return (1);
	else
		return (0);
}
