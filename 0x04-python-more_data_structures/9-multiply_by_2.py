#!/usr/bin/python3
def multiply_by_2(a_dictionary):
    nw = a_dictionary.copy()
    list_keys = list(nw.keys())

    for var in list_keys:
        nw[var] *= 2

    return nw
