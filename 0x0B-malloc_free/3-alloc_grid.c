#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates
 * @width: wdth
 * @height: h
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(height * sizeof(int));
		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < height; i++)
			{
				arr[i] = malloc(width * sizeof(int));
				if (arr[i] == NULL)
				{
					return (NULL);
				}
				else
				{
					for (j = 0; j < width; j++)
					{
						arr[i][j] = 0;
					}
				}
			}
		}
	}
	return (arr);
}
