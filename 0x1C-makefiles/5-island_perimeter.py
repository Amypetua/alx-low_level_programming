#!/usr/bin/python3

""" The perimeter of Island """

def island_perimeter(grid):
    """
    """
    count = 0
    connect_horizontal = 0
    connect_vertical = 0

    # Count the connection of number 1 at horizontal axis
    for _list in grid:
        i = 1
        for number in _list:
            if number == 1:
                count += 1
                if i < len(_list) and number == _list[i]:
                    connect_horizontal += 1
            i += 1

    # Count the connection of number 1 at vertical axis

    for index, _list in enumerate(grid):
        for i in range(0, len(_list)):
            if index < len(grid) -1:
                if _list[i] == 1 and _list[i] == grid[index + 1][i]:
                    connect_vertical += 1
                    
    total = count * 4
    horizontal = connect_horizintal * 2
    vertical = connect_vertical * 2
    perimeter = total - horizontal - vertical
    return preimeter
