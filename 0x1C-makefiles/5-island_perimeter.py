#!/usr/bin/python3
"""
Module to calculate parimeter of island 
"""
def island_perimeter(grid):
    """
    function to calcuate the parimeter
    """
    size = 0
    #width = len(grid[0])
    #length = len(grid)

    for i in grid:
        for j in i:
            if j == 1:
                size += 1

    edges = (size - 1) * 2
    parimeter = (size * 4) - edges

    return parimeter
