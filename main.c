#include <stdio.h>

#define WIDTH 12
#define HIGHT 8

void print_game(int ex, int ey, int px, int py);

int main(void)
{
	print_game(2, 2, WIDTH / 2, HIGHT - 1);
	return (0);

}


void print_game(int ex, int ey, int px, int py)
{
	int i, j
;
	for (i = 0; i < HIGHT; i++)
	{
		for (j = 0; j < WIDTH; j++)
		{

			if (i == ey && j == ex)
				putchar('>');
			else if (i == py && j == px)
				putchar('A');
			else
				putchar('.');

		}
		putchar('\n');
	}
}
