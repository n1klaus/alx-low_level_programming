#include <stdio.h>
#include "main.h"

int main(void)
{
	int putArray[] = {95, 112, 117, 116, 99, 104, 97, 114};
	for (int i = 0; i < 10; i++ )
	{
		putchar(putArray[i]);
	}
	putchar('\n');
	return (0);
}
