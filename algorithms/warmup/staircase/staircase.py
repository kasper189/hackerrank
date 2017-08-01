#!/bin/python

import sys

n = int(raw_input().strip())
for stairs in range(1, n + 1):
    print ' ' * (n - stairs) + '#' * stairs
