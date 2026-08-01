a = [[5, 3], [2, 4], [3, 6], [6, 2], [8, 5]]
l = len(a)
max_weight = 17

m = -999
for i in range(l):
    total = max_weight // a[i][1] * a[i][0]
    if total > m: m = total

print(m)