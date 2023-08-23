#!/usr/bin/python3
"""island Perimeter
"""

def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 0:
                continue
            perimeter += 4
            if i > 0:
                perimeter -= grid[i - 1][j]
            if i < len(grid) - 1:
                perimeter -= grid[i + 1][j]
            if j > 0:
                perimeter -= grid[i][j - 1]
            if j < len(grid[0]) - 1:
                perimeter -= grid[i][j + 1]
    return perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
