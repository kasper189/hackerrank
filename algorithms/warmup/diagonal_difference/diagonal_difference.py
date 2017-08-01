#!/bin/python

import sys

def compute_sum(matrix, n):
    primary = sum(matrix[i][i] for i in range(n))
    secondary = sum(matrix[n-i-1][i] for i in range(n))
    return abs(primary - secondary)

n = int(raw_input().strip())
a = []
for a_i in xrange(n):
    a_temp = map(int,raw_input().strip().split(' '))
    a.append(a_temp)
print compute_sum(a, n)
