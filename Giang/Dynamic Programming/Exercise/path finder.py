m = 5
n = 4
a = [[0, 2, 1, 3, 4], [3, 2, 4, 1, 5], [3, 2, 1, 5, 1], [2, 3, 4, 2, 2]]

dp = [[0] * m for i in range(n)]
dp[0][0] = a[0][0]
dp[0] = a[0].copy()

for j in range(1, n):
    dp[j][0] = a[j][0]
    for i in range(1, m):
        dp[j][i] = a[j][i] + max(dp[j - 1][i], dp[j][i - 1])

print(dp[n - 1][m - 1])