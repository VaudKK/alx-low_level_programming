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

    for grid_index, row in enumerate(grid):
        for row_index, col in enumerate(row):
            if col == 1:
                assumed_perimeter += 4
                
                if grid_index != 0 and grid[grid_index-1][row_index] == 1:
                    deductions += 1
                if row_index != 0 and row[row_index-1] == 1:
                    deductions += 1
    return assumed_perimeter - (deductions * 2)
