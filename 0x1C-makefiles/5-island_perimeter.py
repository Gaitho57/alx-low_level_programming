#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
        grid (List[List[int]]): A list of list of integers representing the grid.

    Returns:
        int: The perimeter of the island.

    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Add 4 to the perimeter for each land cell

                # Check if there is a land cell adjacent to the current cell
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2  # Subtract 2 from the perimeter if there is adjacent land in the top cell
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2  # Subtract 2 from the perimeter if there is adjacent land in the left cell

    return perimeter
