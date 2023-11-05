#!/usr/bin/python3
def max_integer(my_list=[]):
    if len(my_list) == 0:
        return None
    largest_integer = my_list[0]

    for i in my_list:
        if i > largest_integer:
            largest_integer = i
    return largest_integer
