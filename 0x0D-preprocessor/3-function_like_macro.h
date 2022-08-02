#ifndef _3_FUNCTION_LIKE_MACRO_
#define _3_FUNCTION_LIKE_MACRO_
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the executed source code in it
 * @abs(): prints the absolute value of x.
 * Return: nothing.
 */

int main(void)
{
	int x = 5;
	int n = abs(x);

	printf("%d", n);

	return (0);
}

#endif
