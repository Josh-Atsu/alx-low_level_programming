#!/usr/bin/python3
"""a function def island_perimeter(grid)"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid
    grid: is a list of integers"""
    rows = len(grid)
    cols = len(grid[0])
    # Checking if grid is empty
    if rows == 0:
        return 0

    perimeter = 0

    # Traverse throught the grid
    # check for neighbour cells or value
    # if 0 increment perimeter
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i == rows - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == cols - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
