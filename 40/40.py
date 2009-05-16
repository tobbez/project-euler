#!/usr/bin/env python

decimals = ""

def d(i):
    return int(decimals[i-1])

i = 0
while len(decimals) < 1000000:
    i += 1
    decimals += str(i)


print d(1) * d(10) * d(100) * d(1000) * d(10000) * d(100000) * d(1000000)
