#!/usr/bin/python3
"""
Module to calculate parimeter of island
"""


def island_perimeter(grid):
    """
    function to calcuate the parimeter
    """
    size = 0
    edges = 0
    width = len(grid[0])
    length = len(grid)

    for i in range(length):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1

                if j > 0 and grid[i][j - 1] == 1:
                    edges += 1

                if i > 0 and grid[i - 1][j] == 1:
                    edges += 1

    parimeter = (size * 4) - (edges * 2)

    return parimeter
