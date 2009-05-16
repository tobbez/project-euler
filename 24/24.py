#!/usr/bin/env python
def all_perms(str):
    if len(str) <=1:
        yield str
    else:
        for perm in all_perms(str[1:]):
            for i in range(len(perm)+1):
                yield perm[:i] + str[0:1] + perm[i:]

l = list(all_perms("0123456789"))
l.sort()
print l[1000000-1]
