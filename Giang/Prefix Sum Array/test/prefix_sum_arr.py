arr = [1, 9, 2, 3]
l = len(arr)

s = [0] * l
s[0] = arr[0]

for i in range(1, l):
    s[i] = (arr[i] + s[i - 1])

print(s)