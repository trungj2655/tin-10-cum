a = [[9, -2, 6, 2, 1, 3, 4], [0 -1, 6, 7, 1, 3, 3], [8, -2, 8, 2, 5, 3, 2]]
m, n = 7, 3
dp = [[0] * m for i in range(n)]
print(dp)
for j in range(1, n):
    for i in range(m):
        val = a[i][j]
        if i == 0:
            dp[i][j] = max(dp[i][j - 1], dp[i + 1][j - 1]) + val
        elif i == m - 1:
            dp[i][j] = max(dp[i - 1][j - 1], dp[i][j - 1]) + val
        else:
            dp[i][j] = max(dp[i - 1][j - 1], dp[i][j - 1], dp[i + 1][j - 1]) + val

maxd = dp[0][n - 1]
for i in range(0, m): maxd = max(maxd, dp[i][n - 1])
print(maxd)

