#!/usr/bin/python3

"""
island perimeter module
"""

def island_perimeter(grid):
    """
    calculates the island perimeter
    """
    deductions = 0
    assumed_perimeter = 0
    for row in grid:
        for col in row:
            if col == 1:
                assumed_perimeter += 4

    for grid_index,row in enumerate(grid):
        for row_index, col in enumerate(row):
            if col == 1:
                try:
                    if row[row_index -1] == 1:
                        deductions += 1
                    if grid[grid_index-1][row_index] == 1:
                        deductions += 1
                except:
                    pass

    return assumed_perimeter - (deductions * 2)

