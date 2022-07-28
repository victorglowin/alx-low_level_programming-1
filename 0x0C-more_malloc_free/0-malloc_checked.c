#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - alloctaes memory using malloc
 * @b: Number of bytes to be allocated
 * Return: pointer to  the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
