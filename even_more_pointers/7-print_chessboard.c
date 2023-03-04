#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - prints a chessboard.
 * @a: chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			printf("%c", a[x][y]);
		}
		putchar(10);
	}
}
