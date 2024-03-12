#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Free up memory of a 2 dimentional array
 * @grid: target memory to free
 * @height: size of array
 *
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height <= 0)
return;
for (i = 0; i < height; i++)
free(grid[(height - 1) - i]);
free(grid);
}
