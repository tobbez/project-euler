#!/usr/bin/env python
from operator import mul
fac = lambda n: reduce(mul, xrange(2,n+1), 1)

s = 0
for i in xrange(3,100000):
	t = 0
	for c in str(i):
		t += fac(int(c))
	if t == i:
		s += t
print s
