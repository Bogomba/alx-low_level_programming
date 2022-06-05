#include <stdio.h>
/**
 * main - Entry point, prints alphabet in lower and uppercase
 * Return: Always 0 (Success)
 */

int main (void)

{
	char lower;
		char upper;
	for (lower = 'a'; lower <='z'; lower++)
		for (upper = 'A'; upper <='Z'; upper++)
	putchar(lower);
	putchar(upper);
	putchar('\n');
	return (0);                                
}
