#!/usr/bin/python3
def island_perimeter(grid):
	count = 0
	for mylist in grid:
		for i in mylist:
			if i == 1:
				count = count + 2
	return count + 2

