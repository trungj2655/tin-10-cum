import sys
sys.stdin = open("flower.inp", 'r')
sys.stdout = open("flower.out", 'w')

n, k = map(int, input().split())
v = [[0] * (n + 1)]

for i in range(n):
    b = [0] + list(map(int, input().split())) + [0] * (n - k)
    v.append(b)

dp = [[0] * (n + 1) for _ in range(n + 1)]
dp[1][1] = v[1][1]

for i in range(2, k + 1): dp[i][i] = dp[i - 1][i - 1] + v[i][i]

for i in range(2, n + 1):
    for j in range(1, i):
        dp[i][j] = max(dp[i - 1][j - 1] + v[i][j], dp[i - 1][j])

print(dp[n][k])
sys.stdout.close()
