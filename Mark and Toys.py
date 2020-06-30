#!/bin/python

import math
import os
import random
import re
import sys

# Complete the maximumToys function below.
def maximumToys(prices, k):
    prices.sort()
    i = 0
    while k > 0 and i < len(prices):
        k -= prices[i]
        i += 1

    return i - 1

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = raw_input().split()

    n = int(nk[0])

    k = int(nk[1])

    prices = map(int, raw_input().rstrip().split())

    result = maximumToys(prices, k)

    fptr.write(str(result) + '\n')

    fptr.close()
