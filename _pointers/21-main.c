#include <stdio.h>
/**
  * main - pointers arithmetic
  *
  * Return: Always 0.
  */
int main(void)
{
	int *p;
	int *p2;
	int a[5];

	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	a[3] = 398;
	*(a + 4) = 498;
	p = a + 1;
	*p = 98;
	p2 = a + 3;
	*p2 = *p + 1337;

	printf("a[0]: %d\n", a[0]);
	printf("a[0]: %p\n", a);
	printf("a[1]: %d\n", a[1]);
	printf("a[1]: %p\n", (a + 1));
	printf("a[2]: %d\n", a[2]);
	printf("a[2]: %p\n", (a + 2));
	printf("a[3]: %d\n", a[3]);
	printf("a[3]: %p\n", (a + 3));
	printf("a[4]: %d\n", a[4]);
	printf("a[4]: %p\n", (a + 4));
	printf("p = a + 1;\np:%p\n*p:%d\np2 = a + 3:\np2:%p\n*p2 = *p + 1337\n*p2:%d\n", p, *p, p2, *p2);
	return (0);
}
