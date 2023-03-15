#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees 2D array.
 *
 * @grid: 2D grid to be freed.
 * @height: Height of the grid.
 *
 * Description: Frees memory allocated for a 2D grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
