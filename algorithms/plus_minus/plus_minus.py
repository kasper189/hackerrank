#!/bin/python

import sys

def compute_stats(array, n):
    positive = 0
    negative = 0
    zeros = 0
    for element in array:
        if element > 0:
            positive +=1
        elif element < 0:
            negative +=1
        else:
            zeros +=1
    return positive, negative, zeros

def compute_ratio(dividend, divisor):
    return dividend / float(divisor)

n = int(raw_input().strip())
arr = map(int,raw_input().strip().split(' '))
for value in compute_stats(arr, n):
    print compute_ratio(value, n)




