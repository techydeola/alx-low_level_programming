#!/usr/bin/python3
"""
    5-island_perimeter.py
"""


def island_perimeter(grid):

    """ This function return the perimeter of an island described in grid
            grid:
                0 - represents a water zone
                1 - represents a land zone
                One cell is a square with side length 1
                Grid cells are connected horizontally/vertically
                Grid is rectangle, width and height don't exceed 100
    """
    length = 0
    final_len = 0

    for x in grid:
        for cell in x:
            if cell == 1:
                length += 1
                continue
            if length >= 1:
                final_len = length
            length = 0

    return final_len * 4
