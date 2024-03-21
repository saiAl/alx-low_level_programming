#!/bin/usr/python3
""" 5. Island Perimeter """


def island_perimeter(grid):
    """ eturns the perimeter of the island described in grid """
    pmeter = 0
    land = 0

    for row in range(len(grid)):
        for col in grid[row]:
            if grid[row][col] == 1:
                pmeter += 4
                if grid[row][col + 1] == 1:
                    land += 1

    return (pmeter - ((land - 1) * 4))
