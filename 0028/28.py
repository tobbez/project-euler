#!/usr/bin/env python
s = 1
sz = 2
c = 1

while sz <= 1000:
	for j in range(4):
		c += sz
		s += c
	sz += 2

print s
