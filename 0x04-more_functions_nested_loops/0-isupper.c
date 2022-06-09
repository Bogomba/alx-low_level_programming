#include"main.h"
#include"stdio.h"

/**
 * _isupper - checks for uppercase character
 * @c: - character
 * Return: Always 0
 */
int _isupper(int c)
{
	char = c;
	c = 'A';
	_putchar("%c: %d\n", c, _isupper(c));
	c = 'a';
	_putchar("%c: %d\n", c, _isupper(c));
	return (0);
}
