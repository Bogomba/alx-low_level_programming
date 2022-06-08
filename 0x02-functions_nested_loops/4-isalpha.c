#include"main.h"
/**
 *_isalpha -checks for alphabetic character c being checked
 * @c: charater
 *Return: print 1 if c is a letter, lowercase or uppercase, otherwise, 0
 */
int _isalpha(int c)

{
	if (c < 65 || c > 122)
	{
	return (0);
	}
	else
	{
	return (1);
	}
}


