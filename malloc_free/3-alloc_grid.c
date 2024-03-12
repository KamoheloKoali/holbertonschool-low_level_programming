#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array
 * @width: variable for parameter
 * @height: variable for parameter
 * Return: integer pointer
 */

int **alloc_grid(int width, int height)
{
        int *data;
        int **grid;

        if (width <= 0 || height <= 0)
            return (NULL);
        grid = malloc(height * sizeof(int *));
        if (grid == NULL)
            return (NULL);
        data = malloc(width * height * sizeof(int));
        if (data == NULL) {
                free(grid);
                return (NULL);
        }
        for (int i = 0; i < height; i++)
                grid[i] = data + i * width;
        return (grid);
}

