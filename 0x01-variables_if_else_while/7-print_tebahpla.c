#include <stdio.h>

/**
 * main -Entry point, print alphabet in reverse
 * Return: Always 0 (Success)
 */

int main(void)

{
	int lowercase;

	for (lowercase = 'z'; lowercase >= 'a'; lowercase--)
	putchar(lowercase);
	putchar('\n');
	return (0);
}
