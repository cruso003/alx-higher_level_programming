# A function that finds the biggest integer of a list
def max_integer(my_list=[]):
    if len(my_list) == 0:
        return None
    largest_integer = my_list[0] #We assume that the largest integer is the first
    
    for i in my_list:
        if i > largest_integer:
            largest_integer = i
    return largest_integer
