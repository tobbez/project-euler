#!/usr/bin/env python

def bin(dec):
    ret = ''
    while(dec > 0):
        ret = str(dec % 2) + ret
        dec = dec >> 1
    return ret

def is_palindromic(s):
    for i in range(len(s) // 2):
        if s[i] != s[-1 -i]:
            return False
    return True

sum = 0
for i in range(1,1000000):
    if is_palindromic(bin(i)) and is_palindromic(str(i)):
        sum += i

print sum
