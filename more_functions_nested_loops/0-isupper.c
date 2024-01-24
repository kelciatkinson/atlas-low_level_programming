#include <main.h>
#include <stdio.h>

/**
 * main - check for uppercase letters
 *
 * Return: 0
 */

int _isupper(int c);

int main(char)
{
	char letter;
	if (letter >= 'A' && letter <= 'Z')
		return 1;
	else
		return 0;
}
