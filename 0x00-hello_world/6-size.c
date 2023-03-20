#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C Program that prints  the size of various types on the computer it is compiled and run on using printf function
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	printf("size of a", sizeof(char));
	printf("size of a", sizeof(int));
	printf("size of a", sizeof(long int));
	printf("size of a", sizeof(long long int));
	printf("size of a", sizeof(float));
	return (0);
}
