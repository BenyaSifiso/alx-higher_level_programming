#!/usr/bin/python3
# 5-no_c.py


def no_c(my_string):
    """Deletes every char c & C from string."""
    copy = [x for x in my_string if x != 'c' and x != 'C']
    return ("".join(copy))
