#ifndef _2_MAIN_C
#define _2_MAIN_C
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file it was compiled from.
 *
 * Return: nothing.
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

#endif
