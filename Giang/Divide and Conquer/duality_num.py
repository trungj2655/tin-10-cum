arr = [5, 7, 3, 8, 9, 12, 4, 2, 6]
n = len(arr)
c = 0

for i in range(n):
    for j in range(n - i):
        if arr[i] < arr[i + j]:
            c += 1

print(c)