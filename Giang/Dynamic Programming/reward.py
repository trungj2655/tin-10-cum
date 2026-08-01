matrix = [[1, 9, 1, 1], [9, 9, 9, 9], [1, 9, 9, 9], [1, 9, 9, 14]]
k = 3
n = len(matrix)

dp = [[0] * (n + 1) for _ in range(n + 1)]

for i in range(1, n + 1):
    for j in range(1, n + 1):
        dp[i][j] = (
            matrix[i - 1][j - 1]
            + dp[i - 1][j]
            + dp[i][j - 1]
            - dp[i - 1][j - 1]
        )

max_sum = -999999
best_pos = None

for i in range(k, n + 1):
    for j in range(k, n + 1):
        total = (
            dp[i][j]
            - dp[i - k][j]
            - dp[i][j - k]
            + dp[i - k][j - k]
        )

        if total > max_sum:
            max_sum = total
            best_pos = (i - k, j - k)

print(max_sum)
#print(best_pos)