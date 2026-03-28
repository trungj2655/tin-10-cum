N, K, B = map(int, input().split())
idx = (B - 1) % N
Sum = [0]
s = 0
for i in map(int, input().split()):
    s += i
    Sum.append(s)
if idx + K <= N:
    print(Sum[idx + K] - Sum[idx])
else:
    K -= N - idx
    print(Sum[N] - Sum[idx] + (K // N) * Sum[N] + Sum[K % N])