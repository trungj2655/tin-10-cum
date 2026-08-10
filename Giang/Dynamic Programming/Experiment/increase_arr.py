from bisect import bisect_left

arr = [1, 2, 3, 5, 4, 2, 1]
n = len(arr)
tails = []
inc = int()

for idx, val in enumerate(arr):
    pos = bisect_left(tails, val)
    if pos == len(tails):
        tails.append(val)
    else:
        tails[pos] = val

print(tails)
