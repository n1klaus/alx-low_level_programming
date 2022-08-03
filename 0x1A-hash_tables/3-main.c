#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	/*int status = 0, counter = 0;*/

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	/**
	printf("%d Status :=> %d\n", counter++, status);

	status = hash_table_set(ht, "hetairas", "mentioner");
	printf("%d Status :=> %d\n", counter++, status);

	status = hash_table_set(ht, "heliotropes", "neurospora");
	printf("%d Status :=> %d\n", counter++, status);

	status = hash_table_set(ht, "depravement", "serafins");
	printf("%d Status :=> %d\n", counter++, status);

	status = hash_table_set(ht, "stylist", "subgenera");
	printf("%d Status :=> %d\n", counter++, status);

	status = hash_table_set(ht, "joyful", "synaphea");
	printf("%d Status :=> %d\n", counter++, status);

	status = hash_table_set(ht, "redescribed", "urites");
	printf("%d Status :=> %d\n", counter++, status);

	status = hash_table_set(ht, "dram", "vivency");
	printf("%d Status :=> %d\n", counter++, status);
	*/
	return (EXIT_SUCCESS);
}
