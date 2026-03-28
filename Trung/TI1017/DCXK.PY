N, c, maxx = int(input()), 1, 0
m = map(int, input().split())
p, positive = False, next(m) > 0
for i in m:
    p = i > 0
    if positive == p:
        maxx = max(maxx, c)
        c = 1
    else:
        c += 1
        positive = p
maxx = max(maxx, c)
print(maxx)