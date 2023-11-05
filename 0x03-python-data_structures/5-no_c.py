# A function that removes all characters c and C from a string.
def no_c(my_string):
    result = ""
    for i in my_string:
        if i != 'c' and i != 'C':
            result += i
            
    return result