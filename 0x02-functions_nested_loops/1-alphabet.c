#include "main.h"
/**
 * main - Entry point
 *
 * Description: C program that prints the alphabet
 *
 * Return: always 0 (success)
*/

void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
    putchar(ch);
}
    putchar('\n');
}
