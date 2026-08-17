from bisect import bisect_left

arr = [3, 1, 5, 2, 3, 6, 4, 5, 2, 1, 4]
n = len(arr)

inc = [0] * n
tails = []

for i, x in enumerate(arr):
    pos = bisect_left(tails, x)
    if pos == len(tails):
        tails.append(x)
    else:
        tails[pos] = x
    inc[i] = pos + 1

dec = [0] * n
tails = []

for i in range(n - 1, -1, -1):
    x = arr[i]
    pos = bisect_left(tails, x)
    if pos == len(tails):
        tails.append(x)
    else:
        tails[pos] = x
    dec[i] = pos + 1

ans = 0
for i in range(n):
    ans = max(ans, 2 * min(inc[i], dec[i]) - 1)

print("inc:", inc)
print("dec:", dec)
print("wavio:", ans)