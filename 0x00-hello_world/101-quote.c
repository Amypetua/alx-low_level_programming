#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 *Description: 'Piece of art is useful'
 *
 * Return: Always 1 (success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}
