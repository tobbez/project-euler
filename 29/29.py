#!/usr/bin/env python

terms = []

for i in range(2,101):
    for j in range(2, 101):
        t = i ** j
        if not t in terms:
            terms.append(t)

print len(terms)

