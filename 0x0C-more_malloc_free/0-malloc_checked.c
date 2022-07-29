#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size to be allocated
 * Return: pointer to allocated memory or exit with 98
 */
void *malloc_checked(unsigned int b)
{
int *i;

i = malloc_checked(b);
if (i == NULL)
exit(98);

return (i);
}
