#!/usr/bin/python3
"""Minimum oporations"""


def minOperations(n):
    x = 2
    y = 0
    if n == 0 or n == 1:
        return (0)
    while n > 1:
        while n % x == 0:
            y += x
            n /= x
        x += 1
    return (y)
