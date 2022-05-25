#include "lists.h"
/**
 * before_main - constructor executed before main
 *
 * Return: no return.
 */
void __attribute__ ((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
