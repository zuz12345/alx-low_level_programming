#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints assign a random number 
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i s positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i s zero\n", n);
	}
	else 
	{
		printf("%i s negative\n", n);
	}	
	return (0);
}
