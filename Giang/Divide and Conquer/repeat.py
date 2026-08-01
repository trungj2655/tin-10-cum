arr = [2, 4, 3, 6, 8, 3, 6, 1, 6, 1, 4, 8, 3, 6, 9, 12, 53, 4]
n = len(arr)
c = dict()

for i in range(n):
    val = arr[i]
    c[val] = c.get(val, 0) + 1

m = max(c, key=c.get)
print(m)
print(c[m])