#include "main.h"


/**
 * main - Entry point
 *
 * Description: C program that prints print_alphabet
 *
 * Return: always 0 (success)
*/


	void print_alphabet(void)
	{
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);


		_putchar('\n');
	}

