#!/usr/bin/python3
""" An islands perimeter """


def island_perimeter(grid):
    """ returns the perimeter of island described in grid """
    perimeter = 0
    for block in grid:
        for cell in block:
            if cell == 1:
                perimeter = perimeter + 1

    perimeter = (perimeter * 2) + 2

    return perimeter
