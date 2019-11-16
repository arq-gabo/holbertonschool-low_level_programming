#!/usr/bin/python3


def island_perimeter(grid):
    """Method for calculate the perimeter of the island"""

    i = 0

    for line in range(len(grid)):
        for col in range(len(grid[line])):
            if grid[line][col] is 1:
                if grid[line][col - 1] is 0:
                    i += 1
                if grid[line][col + 1] is 0:
                    i += 1
                if grid[line - 1][col] is 0:
                    i += 1
                if grid[line + 1][col] is 0:
                    i += 1
                else:
                    pass
            else:
                pass
    return i
