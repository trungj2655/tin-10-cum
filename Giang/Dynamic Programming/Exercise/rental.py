n = 8
a = [2, 9, 12, 7, 15, 17, 4, 6]
b = [6, 13, 18, 12, 17, 20, 8, 10]
c = [3, 3, 9, 4, 3, 5, 2, 5]

dp = [0] * (n - 1)
dp[0] = c[0]

for i in range(1, n - 1):
    for j in range(0, i - 1):
        dp[i] = max(dp[i], dp[j] + c[i])

print(dp)
