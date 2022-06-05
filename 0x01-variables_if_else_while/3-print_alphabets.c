#include <stdio.h>
/**
 * main - Entry point, prints alphabet in lower and uppercase
 * Return: Always 0 (Success)
 */

int main(void)

{
	char lower;
	for (lower = 'a'; lower <= 'z'; lower++)
	putchar(lower);
	char upper;
	for (upper = 'A'; upper <= 'Z'; upper++)
	putchar(upper);
	putchar('\n');
	return (0);
}
