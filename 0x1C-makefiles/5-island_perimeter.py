#!/usr/bin/python3
""" Module to define perimeter calculation of a grid area """



def island_perimeter(grid):
	""" Returns the perimeter of the island grid. """
	cons_col = 0
	largest_column = 0
	cons_row = 0
	cons_total = 0
	largest_row = 0
	total = 0
	i = 0
	j = 0
	for row in range(len(grid)):
		total = find_consecutive_columns(grid, row)
		if total > 0:
			for r in range(row, len(grid)):
				cons_total = find_consecutive_columns(grid, r)
				if cons_total > 0:
					total += cons_total
		else:
			total = 0
	
	if cons_col != 0 and cons_row != 0:
		return (cons_col + cons_row) * 2

	if cons_total != 0:
		return cons_col * 2

def find_consecutive_columns(grid, rowIndex):
	for c in range(len(grid[rowIndex])):
		if grid[rowIndex][c] == 1:
			cons_col += 1
		else:
			cons_col = 0
	return cons_col