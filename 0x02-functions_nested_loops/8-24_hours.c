#include"main.h"
#include<time.h>
#include<stdio.h>
/**
 * void jack_bauer(void)- prints every minute of the day of Jack Bauer
 * @t: character
 * Return: Always 0
 */

void jack_bauer(void)

{
	int t;

	for (t = '00.00' ; t >= 23.59, t++)
	_putchar(t);
	_puthcar('\n');
	return (0);
}
