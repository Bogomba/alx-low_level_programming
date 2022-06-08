#include"main.h"
#include"stdio.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: character interger
 * Return: Always 0 (Success)
 */
int _abs(int n)

{
	if (n < 0)
	{
		n = +n;
	}
	else
	{
		n = -n;
	}
	return (n);
}
