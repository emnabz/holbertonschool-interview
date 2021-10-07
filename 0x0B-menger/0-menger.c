#include "menger.h"

/**
 * menger - Function that draws a 2D Menger Sponge
 * @level: level of the menger sponge to draw
 *
 * Return: Nothing (void)
*/
void menger(int level)
{
	int i, j, size, h, w;
	char sim;

	size = pow(3, level);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			h = i;
			w = j;
			sim = '#';
			while (h > 0)
			{
				if (h % 3 == 1 && w % 3 == 1)
					sim = ' ';
				h /= 3;
				w /= 3;
			}
			printf("%c", sim);
		}
		printf("\n");
	}
}
