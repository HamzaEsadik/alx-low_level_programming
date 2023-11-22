#!/usr/bin/python3
'''island perimeter model'''
def island_perimeter(grid):
	'''
	calcul perimeter of an island

	args:
		-grid: the list of arrays

	return: the perimeter of the island
	'''
	count = 0
	for mylist in grid:
		for i in mylist:
			if i == 1:
				count = count + 2
	if count != 0:
		return count + 2
	else:
		return 0
