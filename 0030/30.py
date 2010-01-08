#!/usr/bin/env python

s = 0
for i in xrange(2,1000000):
	t = sum([int(c) ** 5 for c in str(i)])
	if t == i:
		s += t

print s
