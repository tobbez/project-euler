#!/usr/bin/env python

a = "0ABCDEFGHIJKLMNOPQRSTUVWXYZ"
f = open("names.txt")
s = f.read()
s = s.replace('"','')
n = s.split(",")
n.sort()

sum = 0
for i in xrange(len(n)):
    for c in n[i]:
        sum += (i+1) * a.index(c)
print sum
