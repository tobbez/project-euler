#!/usr/bin/env python
arr = [[0 for i in range(21)] for j in range(21)]

arr[0][0] = 1

# first row & col are evil, let's init them :)
for i in range(21):
    arr[0][i] = 1
    arr[i][0] = 1

# get to works
for diag_dist in range(1, 21):
    arr[diag_dist][diag_dist] = arr[diag_dist-1][diag_dist] + arr[diag_dist][diag_dist-1]
    for i in range(diag_dist, 21):
        arr[diag_dist][i] = arr[diag_dist-1][i] + arr[diag_dist][i-1]
        arr[i][diag_dist] = arr[i][diag_dist-1] + arr[i-1][diag_dist]


# print our results
print arr[-1][-1]
