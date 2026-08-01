
n = 10 ** 3
h = [2]

dp = [0] * (n + 1)
dp[1] = 1

for x in h:
    dp[x] = -1

for i in range(2, n + 1):
    if dp[i] > -1: dp[i] = (dp[i - 1] + dp[i - 2]) % 14062008
    else: dp[i] = 0

print(dp[n - 1])
