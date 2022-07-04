#include <stdio.h>
#include <ctype.h>
/**
 * main - print alphabet in lowercase
 *
 * Return: Always (0)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
	putchar(tolower(x));
	putchar((char) *"\n");
	}
	return (0);
}
