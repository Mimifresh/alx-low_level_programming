#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - nested loop to make grid
* @width: width input
* @height: height input
* Return: pointer to 2 dim. array
*/
int **alloc_grid(int width, int height)
{
	int **mi;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	mi = malloc(sizeof(int *) * height);
	if (mi == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		mi[a] = malloc(sizeof(int) * width);
		if (mi[a] == NULL)
		{
			for (a = 0; a >= 0; a--)
				free(mi[a]);
		free(mi);
		return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			mi[a][b] = 0;
	}
	return (mi);
}
