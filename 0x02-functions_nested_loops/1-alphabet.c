#include<stdio.h>
#include "main.h"
/**
 * main -entry of function
 * Description: the program's description
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
