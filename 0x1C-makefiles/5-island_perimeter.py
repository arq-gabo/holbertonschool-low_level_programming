#!/usr/bin/python3


def island_perimeter(grid):
    """Method for calculate the perimeter of the island"""

    i = 0

    for line in range(len(grid)):
        for col in range(len(grid[line])):
            if grid[line][col] is 1:
                if grid[line][col - 1] is 0 or col is 0:
                    i += 1
                if grid[line][col + 1] is 0 or col is len(grid) - 1:
                    i += 1
                if grid[line - 1][col] is 0 or line is 0:
                    i += 1
                if grid[line + 1][col] is 0 or line is len(grid[line]) - 1:
                    i += 1
    return i
