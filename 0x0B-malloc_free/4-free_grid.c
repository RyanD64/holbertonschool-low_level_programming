#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - Write a function that frees a 2 dimensional grid
  * @grid: int
  * @height: int
  * Return: grid free
  */

void free_grid(int **grid, int height)
{
int s;

for (s = 0; s < height; s++)
{
free(grid[s]);
}
free(grid);
}
