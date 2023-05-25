#!/usr/bin/python3
"""Defines a function that returns the perimeter of an island"""


def island_perimeter(grid):
    """returns the perimeter of the island"""
    perimeter = 0
    width = len(grid)
    height = len(grid[0])

    for i in range(width):
        for j in range(height):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter
