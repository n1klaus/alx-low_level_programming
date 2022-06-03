#include <stdio.h>
/**
 * modify_my_char_val - set the char value
 * @cc: a pointer the character we want to set
 * @ccc : a character variable
 * Return: nothing
 */
void modify_my_char_val(char *cc, char ccc)
{
	*cc = 'o';
	ccc = 'l';
}

/**
 * main - how to change the value of a variable from outside the function
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';

	printf("Value of 'c' before the call: %c\n", c);
	printf("Address of 'c': %p\n", &c);
	printf("Value of 'p': %p\n", p);
	printf("Address of 'p': %p\n", &p);
	modify_my_char_val(p, c);
	printf("Value of 'c' after the call: %c\n", c);
	printf("Value of 'p' after the call: %p\n", p);
	return (0);
}
