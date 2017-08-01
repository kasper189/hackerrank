#!/bin/python

import sys

def solve(a0, a1, a2, b0, b1, b2):
    # Complete this function
    a_counter = 0
    b_counter = 0
    a_list = [a0, a1, a2]
    b_list = [b0, b1, b2]

    for a, b in zip(a_list, b_list):
        if a > b:
            a_counter +=1
        elif a < b:
            b_counter += 1
    return a_counter, b_counter

a0, a1, a2 = raw_input().strip().split(' ')
a0, a1, a2 = [int(a0), int(a1), int(a2)]
b0, b1, b2 = raw_input().strip().split(' ')
b0, b1, b2 = [int(b0), int(b1), int(b2)]
result = solve(a0, a1, a2, b0, b1, b2)
print " ".join(map(str, result))


