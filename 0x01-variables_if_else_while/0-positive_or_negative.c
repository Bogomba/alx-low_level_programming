#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - Entry point, prints postive, negative or zero
 *Return: Always 0 (Success)
 */
int main ()
{
	int n=rand ();

	srand:(time(0));
	n=rand() -RAND_MAX / 2;

	if (n>0)
	printf("is positive\n");
	if (n==0) {
	printf("is zero\n");
}
	if (n<0 ) {
	printf("is negative\n");
}
	return (0);
}
