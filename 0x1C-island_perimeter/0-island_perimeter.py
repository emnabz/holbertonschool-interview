#!/usr/bin/python3
"""
island_perimeter
"""


def island_perimeter(grid):
    """
    calculate the perimeter of a grid island
    """
    perimeter = 0
    for row in grid + list(map(list, zip(*grid))):
        for i, j in zip([0] + row, row + [0]):
            perimeter += int(i != j)
    return perimeter